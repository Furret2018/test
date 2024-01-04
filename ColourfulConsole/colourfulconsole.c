#include <stdio.h>
#include <stdarg.h>
#include <windows.h>


void setConsoleColour(unsigned nColour){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), nColour);
}

void resetConsoleColour(){
	setConsoleColour(0x07);
}

void print(unsigned nColour, char* fmt, ...){
	va_list args;
	va_start(args, fmt);
	
	char szBuffer[512];
	vsnprintf(szBuffer, 510, fmt, args);
	
	setConsoleColour(nColour);
	printf(szBuffer);
	resetConsoleColour();
		
	va_end(args);
}
