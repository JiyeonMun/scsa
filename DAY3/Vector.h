// Vector.h �� ���鼼��
#pragma once

class Vector
{
private:
	int* ptr;
	int  sz;

public:
	Vector(int size);
	~Vector();
	int& at(int index);
	void resize(int newsize);
};

