#ifndef _SIZE_H_
#define _SIZE_H_

class Size {
private:
	int _width;
	int _height;
public:
	Size(int, int);
	Size(const Size&);
	Size();
	~Size();

	int getWidth() const;
	int getHeight() const;
	void setWidth(int);
	void setHeight(int);
};

#endif