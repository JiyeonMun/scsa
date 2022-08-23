// Vector11
#include <iostream>
#include "Vector.h" 

int main()
{
	Vector<int> v(4);

	v.at(0) = 10;

	v.resize(8);

	std::cout << v.at(0) << std::endl;
}
