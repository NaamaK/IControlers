#ifndef CHECK_LIST_H
#define CHECK_LIST_H
#include <string>
#include "MyLine.h"
#include "IControler.h"

using namespace std;

class CheckList : public IControler {
private:
	MyLine _text[3];

public:
	CheckList(DWORD, COORD, MyLine[], HANDLE, HANDLE);
	CheckList(const CheckList&);
	~CheckList();

};

#endif