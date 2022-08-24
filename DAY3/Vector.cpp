// Vector.cpp
#include <cstring>  // memcpy()사용하기 위해
#include "Vector.h"

Vector::Vector(int size) : sz(size)
{
	ptr = new int[sz];
}

Vector::~Vector()
{
	delete[] ptr;
}

int& Vector::at(int index)
{
	return ptr[index];
}

void Vector::resize(int newsize)
{
	if (newsize > sz)
	{
		int* tmp = new int[newsize];

		memcpy(tmp, ptr, sizeof(int) * sz);

		delete[] ptr;

		ptr = tmp;

		sz = newsize;
	}
}
