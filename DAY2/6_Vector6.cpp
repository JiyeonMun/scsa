#include <iostream>

class Vector
{
private:
	int* ptr;
	int  sz;

public:
	Vector(int size)
	{
		sz = size;
		ptr = new int[sz];
	}
	~Vector()
	{
		delete[] ptr;
	}

	int& at(int index) 
	{
		return ptr[index] ;
	}
};

int main()
{
	int x[4] = { 1,2,3,4 };
	x[0] = 10; // 배열은 []를 사용해서 요소에 접근합니다.


	Vector v(4);  // 4개 크기의 동적 배열 입니다.

	v.at(0) = 10; // 요소 접근을 위해 at() 멤버 함수를 만들어 봅시다.
				  // "v[0] = 10" 이렇게 사용하게도 가능하지만 어렵습니다. 

	std::cout << v.at(0) << std::endl; // 10

	v.at(1) = 20;
	v.at(2) = 30;
	std::cout << v.at(2) << std::endl; // 30

}
