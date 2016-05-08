#ifndef _I_CONTROLER_H_
#define _I_CONTROLER_H_

#include "Size.h"
#include <Windows.h>
enum BorderENUM { NONE, SINGLE_LINE, DOUBLE_LINE };

class IControler {
protected:
	COORD _loc;
	Size _size;
	HANDLE _hStdin;
	HANDLE _hStdout;
	BorderENUM _border;
	DWORD _fontColor;
	DWORD _bgColor;
	bool _cursorVisible;
	bool _consoleVisible;

public:
	IControler(COORD, Size, HANDLE, HANDLE, BorderENUM, DWORD, DWORD, bool, bool);
	~IControler();

	void setLocation(COORD);
	void setSize(Size);
	void setBorder(BorderENUM);
	void setFontColor(DWORD);
	void setBgColor(DWORD);
	void setCursorVisible(bool);
	void setConsoleVisible(bool);

	COORD getLocation() const;
	Size getSize() const;
	BorderENUM getBorder() const;
	DWORD getFontColor() const;
	DWORD getBgColor() const;
	bool getCursorVisible() const;
	bool getConsoleVisible() const;
};

#endif