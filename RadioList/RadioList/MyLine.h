#ifndef MYLINE_H
#define MYLINE_H
#include <iostream>
#include <string>
using namespace std;

class MyLine{
private:
	string unMarked;
	string marked;
	bool flag;

public:
	MyLine(string);
	MyLine(const MyLine&);
	MyLine();

	string getMarked() const;
	string getUnMarked() const;

	bool getFlag() const;
	void changeFlag();

	~MyLine();

};

#endif