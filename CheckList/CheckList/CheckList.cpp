#include <Windows.h>
#include <iostream>
#include "CheckList.h"
#include "MyLine.h"
using namespace std;


CheckList::CheckList(DWORD color, COORD loc, MyLine lines[3], HANDLE hStdin, HANDLE hStdout) : IControler(loc, Size(-1, -1), hStdin, hStdout, NONE, color, color, false, false) {
	SetConsoleCursorPosition(_hStdout, loc);
	CONSOLE_CURSOR_INFO cci = { 100, FALSE };
	SetConsoleCursorInfo(_hStdout, &cci);
	SetConsoleTextAttribute(_hStdout, color);
	int index = 0;
	for (index = 0; index < 3; index++){
		cout << lines[index].getUnMarked();
		_loc.Y = _loc.Y + 1;
		SetConsoleCursorPosition(_hStdout, _loc);
	}
	_loc.Y = _loc.Y - (index);
	SetConsoleCursorPosition(_hStdout, _loc);

}


CheckList::~CheckList() {

}