#ifndef CHECK_LIST_H
#define CHECK_LIST_H 
#include <string>
#include "IControler.h"
#include "MyLine.h"

using namespace std;

class RadioList : public IControler {
private:
	MyLine _text[3];

public:
	RadioList(DWORD, COORD, MyLine[], HANDLE, HANDLE);
	RadioList(const RadioList&);
	~RadioList();

};

#endif