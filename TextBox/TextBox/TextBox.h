#ifndef TEXT_BOX_H
#define TEXT_BOX_H 
#include <string>
#include <iostream>
#include <stdio.h>
#include "IControler.h"

using namespace std;

class TextBox : public IControler{
private:
	string _text[3];

public:
	TextBox(DWORD, COORD, HANDLE, HANDLE, Size);
	TextBox(const TextBox&);

	//methods
	void containerBuilder(HANDLE h, COORD _loc, int, int);

	//destructor
	~TextBox();

};

#endif