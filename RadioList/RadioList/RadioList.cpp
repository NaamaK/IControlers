#include <Windows.h>
#include <iostream>
#include "RadioList.h"
#include "MyLine.h"
using namespace std;

RadioList::RadioList(DWORD color, COORD loc, MyLine _lines[3], HANDLE hStdin, HANDLE hStdout) : IControler(loc, Size(-1, -1), hStdin, hStdout, NONE, color, color, false, false) {
	SetConsoleCursorPosition(_hStdout, _loc);
	CONSOLE_CURSOR_INFO cci = { 100, FALSE };
	SetConsoleCursorInfo(_hStdout, &cci);
	SetConsoleTextAttribute(_hStdout, _fontColor);
	int index = 0;
	for (index = 0; index < 3; index++){
		//start with first row marked
		if (index == 0){
			cout << _lines[index].getMarked();
			_lines[index].changeFlag();
		}
		else
			cout << _lines[index].getUnMarked();

		_loc.Y = _loc.Y + 1;
		SetConsoleCursorPosition(_hStdout, _loc);
	}
	_loc.Y = _loc.Y - (index);
	SetConsoleCursorPosition(_hStdout, _loc);

}


RadioList::~RadioList() {

}