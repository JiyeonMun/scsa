//  5_������������ - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 2���� "���� ���ϴ� ����" �� ������� �մϴ�.
	// ������ � �ڵ尡 ���� ���� ��� ?

	Point p3 = Add(p1, p2); // C ��� ��Ÿ��.

	Point p4 = p1.Add(p2);  // java ��� ��Ÿ��
	
	Point p5 = p1 + p2; // C++ ��Ÿ�� 
			// �����ڶ� "���� ǥ���� ����"�� ��� �ִٰ� C++ â���ڰ� ǥ��
			// ����� ���� Ÿ�Ե� ������ �ǰ� ����!


	// a + b �� �����Ϸ��� �ؼ��ϴ� ���
	// 1. a, b �� ��� primitive Ÿ���̸� "�Ϲ� ����" ����

	// 2. a, b �߿� �Ѱ��� user type �� ������
	//    A. a.operator+(b) �� �����ϸ� ȣ��. �ȵǸ�
	//    B. operator+(a, b) �� ȣ��, 
	//	  A, B��� �ȵǸ� error
}

