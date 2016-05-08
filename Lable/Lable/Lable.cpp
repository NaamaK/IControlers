#include <Windows.h>
#include <iostream>
#include "lable.h"

Lable::Lable(DWORD color, COORD loc, string text, HANDLE hStdin, HANDLE hStdout) : IControler(loc, Size(-1,-1), hStdin, hStdout, NONE, color, color, false, false), _text(text) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(h, loc);
	CONSOLE_CURSOR_INFO cci = { 100, FALSE };
	SetConsoleCursorInfo(h, &cci);
	SetConsoleTextAttribute(h, color);
	cout << text << endl;
}

Lable::~Lable() {

}