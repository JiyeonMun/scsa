// temporary1
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	~Point()  { std::cout << "~Point()" << std::endl; }
};
int main()
{
//	Point pt(1, 2); // named object, ���� : �ڽ��� ������ ������ ����� �ı�

//	Point (1, 2);   // unnamed object, 
					// �ӽð�ü(temporary) ��� �մϴ�.
					// ���� : �ڽ��� ������ ������ ������ �ı�.


	Point(1, 2), std::cout << "X" << std::endl;

	std::cout << "---------------" << std::endl;
}

// ȭ�� ��°�� ������ ������.