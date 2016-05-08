#include "size.h"

Size::Size(int width, int height) : _width(width), _height(height) {

}

Size::Size(const Size& sz) : _width(sz._width), _height(sz._height) {

}

Size::Size() : _width(-1), _height(-1) {

}

Size::~Size() {

}

int Size::getWidth() const {
	return _width;
}

int Size::getHeight() const {
	return _height;
}

void Size::setWidth(int width) {
	_width = width;
}

void Size::setHeight(int height) {
	_height = height;
}