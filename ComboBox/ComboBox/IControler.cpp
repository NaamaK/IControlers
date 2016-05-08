#include "IControler.h"

IControler::IControler(COORD loc, Size size, HANDLE hstdin, HANDLE hstdout, BorderENUM border, DWORD fontClr, DWORD bgClr, bool crsrVis, bool cnslVis)
						: _loc(loc), _size(size), _hStdin(hstdin), _hStdout(hstdout), _border(border), _fontColor(fontClr), _bgColor(bgClr), _cursorVisible(crsrVis), _consoleVisible(cnslVis) {

}
IControler::~IControler() {

}

void IControler::setLocation(COORD loc) {
	_loc = loc;
}

void IControler::setSize(Size size) {
	_size = size;
}

void IControler::setBorder(BorderENUM border) {
	_border = border;
}

void IControler::setFontColor(DWORD fontClr) {
	_fontColor = fontClr;
}

void IControler::setBgColor(DWORD bgClr) {
	_bgColor = bgClr;
}

void IControler::setCursorVisible(bool crsrVis) {
	_cursorVisible = crsrVis;
}

void IControler::setConsoleVisible(bool cnslVis) {
	_consoleVisible = cnslVis;
}


COORD IControler::getLocation() const {
	return _loc;
}

Size IControler::getSize() const {
	return _size;
}

BorderENUM IControler::getBorder() const {
	return _border;
}

DWORD IControler::getFontColor() const {
	return _fontColor;
}

DWORD IControler::getBgColor() const {
	return _bgColor;
}

bool IControler::getCursorVisible() const {
	return _cursorVisible;
}

bool IControler::getConsoleVisible() const {
	return _consoleVisible;
}