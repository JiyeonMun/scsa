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
		ptr = new int[sz]
	}
	// 위 처럼 생성자에서 메모리 할당하는 코드 가 있을때는 
	// 대부분 소멸자를 만들어서 메모리 해지를 하게 됩니다.
	~Vector()
	{
		delete[] ptr;
	}
};

int main()
{
	Vector v(4);  // 이 순간의 메모리 그림을 그려 보세요.

//	v.at(0) = 10;
//	v.resize(8); 
//	std::cout << v.at(0) << std::endl; 
}
