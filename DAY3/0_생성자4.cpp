#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	// ����� �ڵ�		
	Rect()				 
	{	
		// �����Ϸ��� ������ �պκп�..
		// leftTop, rightBottom �� ���� �����ڸ� ȣ���ϴ� �ڵ带 ����

		std::cout << "Rect()" << std::endl;
	}
};
// ��� : ��ü ������, ��� ��� ����Ÿ�� �����ڵ� ȣ��˴ϴ�.
//       Rect() �����ھȿ���, leftTop, rightBottom �����ڸ� ȣ���ϴ�
//	     �ڵ带 �����Ϸ��� �߰��� �ִ°�.


int main()
{
	Rect rc; // 1. sizeof(Rect) ũ���� �޸𸮸� ���ÿ� �Ҵ�
		     // 2. call Rect() �Լ�(������)�� ȣ��
}
