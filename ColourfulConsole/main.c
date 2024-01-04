#include "colourfulconsole.h"

int main(int argc, char *argv[]) {
	setConsoleColour(0xF4);   // 0xF4 = 011111 0100b = 强白背景 + 红字
	print(RED, "Hello, Colourful Console! %d", RED);
	resetConsoleColour();
	
	return 0;
}
