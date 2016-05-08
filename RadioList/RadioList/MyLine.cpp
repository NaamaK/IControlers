#include "MyLine.h"

MyLine::MyLine(string unMarked){
	string test;
	this->unMarked = unMarked;
	this->marked = unMarked;
	marked.replace(1, 1, "X");

	flag = false;
}

MyLine::MyLine(const MyLine& ml) : unMarked(ml.unMarked), marked(ml.marked), flag(ml.flag) {

}

MyLine::MyLine() {

}

string MyLine::getMarked() const{
	return marked;
}
string MyLine::getUnMarked() const{
	return unMarked;

}

bool MyLine::getFlag() const{
	return flag;
}
void MyLine::changeFlag(){
	this->flag = !flag;
}

MyLine::~MyLine(){}