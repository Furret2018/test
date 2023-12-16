#include <stdio.h>
#include <stdlib.h>		// memset
#include <string.h>		// 字符串和字符数组处理 
#include <dirent.h>		// 文件夹处理 

/****************************************
Parameters:
	in szFileName: zero end string, the path of the file
	out szFileHashCode:
		store the Hash Code of File.
		length 40 and value in HEX

Return values:
	0: Execute OK
	-1:   popen failed
	other value: Execute command Failed
**************************************/
int getFileHashCode(const char* szFileName, char* szFileHashCode);


int main(int argc, char *argv[]) {
	char szFileName[] = "C:\\Users\\Marisha\\Downloads\\高清 1080P C 面向对象高级编程侯捷 P1 1 C 编程简介.mp4";
	char szFileHashCode[40] = {0};				 
	memset(szFileHashCode, 0, sizeof(szFileHashCode));
	
	char szBuffer[200] = {0};
	memset(szBuffer, 0, sizeof(szBuffer));
	
	getFileHashCode(szFileName, szFileHashCode);
	strncpy(szBuffer, szFileHashCode, 40);		// !!! Very critical import ，无法使用sprintf，因为不是字符串，没有结束标志 
	printf("%s \n", szBuffer);


	const char* szDirPath = "C:\\Users\\Marisha\\Desktop\\AI\\";
	DIR* pDir = opendir(szDirPath);

	char szFullFileName[522] = {0};
	struct dirent* pDirEntry;
	readdir(pDir);  // 这一个是. 代表自身 
	readdir(pDir);  // 这一个是.. 代表父目录  ,当然首先得判断 当前路径是一个目录而不是文件（因为后面还要遍历当前目录下面的所有子目录，所以判断必须有） 
	unsigned uiFileCount = 0;
	while( NULL != (pDirEntry = readdir(pDir)))
	{
	  if ( 0 == strcmp(pDirEntry->d_name, ".") || 0 == strcmp(pDirEntry->d_name, "..")) continue;
		sprintf(szFullFileName, "%s%s", szDirPath, pDirEntry->d_name);      // 因为两个占位符都是字符串，可以用sprintf 
		getFileHashCode(szFullFileName, szFileHashCode);
		strncpy(szBuffer, szFileHashCode, 40);
		printf("%2d) %-80s %s \n", uiFileCount, szFullFileName, szBuffer);
		uiFileCount++;
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

	return pclose(pf);
}
