#ifndef LABLE_H
#define LABLE_H 
#include <string>
#include "IControler.h"
using namespace std;

class Lable : public IControler {
private:
	string _text;

public:
	Lable(DWORD, COORD, string, HANDLE, HANDLE);
	Lable(const Lable&);
	~Lable();

};

#endif