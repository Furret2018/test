#include "assistant.h"
#include <sys/stat.h>
#include <stdio.h>

unsigned getFileType(const char* szFilePath)
{
	struct stat st;
	
	int nStat = stat(szFilePath, &st);
	
	if(0 == nStat)
	{
		// only check the dir or regular file 
		if (S_ISDIR(st.st_mode)) return IS_DIR;
		if (S_ISREG(st.st_mode)) return IS_REG; 
	}
	
	return 0;     // File not exist or fail to get the status
}
