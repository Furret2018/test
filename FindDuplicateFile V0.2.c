/*
计算SHA １，得４０位的HEX 数值
这一版本中，我们为了复制HashCode,采用了不优雅的做法: 计算hash code的函数保持不变，那么实际仍需要４１个字符，最后一定实际写入了换行，主程序中，我们手动将第４１字符置为０，从而保证的结束标志，节省了空间


改进２：
我们使用了chdir 来切换工作目录到当前要计算的文件夹下面，这样我们就不用使用全文件名来传给ｃｅｒｔｕｔｉｌ了，这样节省了很多的字节空间，让代码更简洁

截止到目前，我们计算的对象仍然是单一的文件夹。
*/


#include <stdio.h>
#include <stdlib.h>		// memset

#include <string.h>		// 字符串和字符数组处理 
#include <dirent.h>		// 文件夹处理 

/****************************************
Parameters:
	in szFileName: zero end string, the path of the file
	out szFileHashCode:
		store the Hash Code of the File.
		length 40 and value in HEX

Return values:
	0: Execute OK
	-1:   popen failed
	other value: Execute command Failed
**************************************/
int getFileHashCode(const char* szFileName, char* szFileHashCode);
void printcwd();

int main(int argc, char *argv[]) {
	char szFileHashCode[41] = {0};				 
	memset(szFileHashCode, 0, sizeof(szFileHashCode));

	const char* szDirPath = "C:\\Users\\Marisha\\Desktop\\AI\\";
	DIR* pDir = opendir(szDirPath);
	
	//Change the working directory to the target dir
	if(0 != chdir(szDirPath))
	{
		exit(1); // change dir failed!		
	} else printcwd();	

	char szFullFileName[522] = {0};
	struct dirent* pDirEntry;
	readdir(pDir);  // 这一个是. 代表自身 
	readdir(pDir);  // 这一个是.. 代表父目录  ,当然首先得判断 当前路径是一个目录而不是文件（因为后面还要遍历当前目录下面的所有子目录，所以判断必须有） 
	unsigned uiFileCount = 0;	
	
	while( NULL != (pDirEntry = readdir(pDir)))
	{
	    // if ( 0 == strcmp(pDirEntry->d_name, ".") || 0 == strcmp(pDirEntry->d_name, "..")) continue;
		sprintf(szFullFileName, "%s%s", szDirPath, pDirEntry->d_name);      // 因为两个占位符都是字符串，可以用sprintf 
		getFileHashCode(szFullFileName, szFileHashCode);
		szFileHashCode[40] = 0;
				
		uiFileCount++;
		printf("%4d) %-80s %s \n", uiFileCount, szFullFileName, szFileHashCode);		
	}

	closedir(pDir);

	return 0;
}

int getFileHashCode(const char* szFileName, char* szFileHashCode) {
	char szCommand[256];
	memset(szCommand, 0, 256);
	sprintf(szCommand, "certutil -hashfile \"%s\" | find /V \" \"", szFileName);

	// Create the pipe
	FILE* pf = popen(szCommand, "r");
	if(NULL == pf) return -1; // popen failed

	// Read the hashcode and fill it to the external char array
	while('\n' != (*szFileHashCode = getc(pf))) {          // 实际上这里显示的并不是40个HEX字符，因为还有一个换行符，但是因为是MingGW，所以是Linux下的10，这样会导致数组越界，
	// 如果存放HashCode数组是41个字符，那么最后一个会被写入10。如果不明白这里，就会以为产生了一个诡异的现象，就是输出HashCode时会发现出现一个奇怪的换行，
	// 以及有莫名其妙的空格。显示然这样操作是错误的。这也引出了或关联出了字符数组和字符串是不同的东西的问题。后面使用了strncpy来解决这个问题，以及sprintf或sprintf_s只能接受字符串，无法接
	// 受字符数组，因为复制时因为没有结束标志0而产生错误，可以通过检查返回值来看有没有错误产生或具体复制了多少字符，在Socket编程时，还会遇到类似的问题。
	
	// 使用EOF看着简洁，但是实际上是错误的，但是为了简洁，这里不打算改用for，那么只能用41个字符数组来放Hashcode防止越界了。 第41个字符实际上放的是回车=10
	// 或者我们已经知道放的是回车，可以将EOF换成10，从而只使用40位char 
	// 综上，因为回车看不见，我们便以为没有那个字符，这应该是一种常见的错误 
		szFileHashCode++;
	} 
	// 注，因为*szFileHashCode = get(pf)，其实换行已经被写入到第41个字符，所以后面main里在执行该函数后，手动将szFileHashCode[40] = 0以添加结束标志 

	return pclose(pf);
}

void printcwd()
{
	char szCurrentWorkingDir[260];
	getcwd(szCurrentWorkingDir, sizeof(szCurrentWorkingDir));
	printf("Current Working Directory: %s \n", szCurrentWorkingDir);
}
