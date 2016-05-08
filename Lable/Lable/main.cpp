#include <iostream>
#include <Windows.h>
#include "Lable.h"

using namespace std;

//Global
HANDLE hStdin;
DWORD fdwSaveOldMode;

VOID ErrorExit(LPSTR);

int main(void) {

	DWORD cNumRead, i;
	INPUT_RECORD irInBuf[128];

	DWORD fdwMode = (ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);
	if (!SetConsoleMode(hStdin, fdwMode)) {}


	DWORD c = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	COORD cor = { 7, 7 };
	string text = "hello";
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	Lable l(c, cor, text, hStdin, hStdout);

	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	while (1)
	{
		// Wait for the events. 

		if (!ReadConsoleInput(
			hStdin,      // input buffer handle 
			irInBuf,     // buffer to read into 
			128,         // size of read buffer 
			&cNumRead)) // number of records read 

			ErrorExit("ReadConsoleInput");
	}
}

VOID ErrorExit(LPSTR lpszMessage) {
	fprintf(stderr, "%s\n", lpszMessage);

	// Restore input mode on exit.

	SetConsoleMode(hStdin, fdwSaveOldMode);

	//	ExitProcess(0);
}
