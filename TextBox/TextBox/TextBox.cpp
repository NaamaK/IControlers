#include <Windows.h>
#include <iostream>
#include "TextBox.h"
using namespace std;

#define FIRST_ROW 10
#define FIRST_COLUMN 25


TextBox::TextBox(DWORD color, COORD loc, HANDLE hStdin, HANDLE hStdout, Size sz) : IControler(loc, sz, hStdin, hStdout, NONE, color, color, false, false) {
	SetConsoleCursorPosition(_hStdout, loc);
	CONSOLE_CURSOR_INFO cci = { 1, TRUE };
	SetConsoleCursorInfo(_hStdout, &cci);
	SetConsoleTextAttribute(_hStdout, color);
	containerBuilder(_hStdout, loc, sz.getWidth(), sz.getHeight());

}

void TextBox::containerBuilder(HANDLE h, COORD loc, int width, int height){

	int index = 0;
	//first line
	char corner = 201;
	cout << corner;
	while (index++ < width)
		cout << "=";

	index = 0;
	corner = 187;
	cout << corner << endl;

	//body of the container
	for (int i = 0; i < (height); i++){
		_loc.Y += 1;
		SetConsoleCursorPosition(h, _loc);
		cout << (char)186;
		int j = 0;
		while (j++ < width)
			cout << " ";

		cout << (char)186;
	}
	_loc.Y += 1;
	SetConsoleCursorPosition(h, _loc);

	//end line
	corner = 200;
	cout << corner;

	while (index++ < width)
		cout << "=";

	index = 0;
	corner = 188;
	cout << corner << endl;

	//getting the pointer to the begining
	_loc.X = (FIRST_COLUMN)+1;
	_loc.Y = FIRST_ROW + 1;
	SetConsoleCursorPosition(h, _loc);

}

TextBox::~TextBox() {
}