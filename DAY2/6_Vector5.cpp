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
	// �� ó�� �����ڿ��� �޸� �Ҵ��ϴ� �ڵ� �� �������� 
	// ��κ� �Ҹ��ڸ� ���� �޸� ������ �ϰ� �˴ϴ�.
	~Vector()
	{
		delete[] ptr;
	}
};

int main()
{
	Vector v(4);  // �� ������ �޸� �׸��� �׷� ������.

//	v.at(0) = 10;
//	v.resize(8); 
//	std::cout << v.at(0) << std::endl; 
}
