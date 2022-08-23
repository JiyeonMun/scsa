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
	x[0] = 10; // �迭�� []�� ����ؼ� ��ҿ� �����մϴ�.


	Vector v(4);  // 4�� ũ���� ���� �迭 �Դϴ�.

	v.at(0) = 10; // ��� ������ ���� at() ��� �Լ��� ����� ���ô�.
				  // "v[0] = 10" �̷��� ����ϰԵ� ���������� ��ƽ��ϴ�. 

	std::cout << v.at(0) << std::endl; // 10

	v.at(1) = 20;
	v.at(2) = 30;
	std::cout << v.at(2) << std::endl; // 30

}
