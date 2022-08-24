#include <iostream>

int main()
{
	std::cout << sizeof(int) << std::endl;		// 4 byte
	std::cout << sizeof(char) << std::endl;		// 1 byte
	std::cout << sizeof(double) << std::endl;	// 8 byte

	// ��� ������ �����ʹ� ũ�Ⱑ ���� �մϴ�.
	// 32bit : 4byte,   64bit : 8 byte
	std::cout << sizeof(int*) << std::endl;		// 8
	std::cout << sizeof(char*) << std::endl;	// 8
	std::cout << sizeof(double*) << std::endl;	// 8

}