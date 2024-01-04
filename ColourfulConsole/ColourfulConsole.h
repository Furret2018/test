#ifndef __COLOURFULCONSOLE_H
#define __COLOURFULCONSOLE_H

typedef enum colour{
	BLACK   = 0,
	BLUE    = 1,
	GREEN   = 2,
	RED     = 4,
	WHITE   = 7,
	TENSIFY = 8,
}COLOUR;

void setConsoleColour(unsigned nColour);
void resetConsoleColour();
void print(unsigned nColour, char* fmt, ...);

#endif
