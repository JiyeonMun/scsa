//  5_������������ - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	Point operator+(const Point& pt)
	{
		std::cout << "member operator+" << std::endl;

		Point temp(x + pt.x, y + pt.y);
		return temp;
	}

	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "non-member operator+" << std::endl;

	Point  temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// member vs non-member
	// member �� ���ٴ� �ǰ� : private ������ member�� ����.
	// non-member �ǰ�     : ����� �ȵɶ��� �ִ�.
	//						1��° ���ڰ� user type �� �ƴҶ�..(�Ʒ�����)
	int n = 0;
	Point p3 = p1 + p2; // p1.operator+(Point)
	Point p4 = p1 + n;	// p1.operator+(int)
	Point p5 = n  + p2; // n.operator+(Point) �� �ʿ��ѵ�, n�� primitive Ÿ��
						// => operator+(int, Point) �� �ϸ�ȴ�.

	// java : ������ ������ �ȵ�
	// C#, Python : �ֿ��� ������ 20~30���� ������ ����
	// C++ : 4�� ������ ���� ��� ������ ���� ( 186 page)
	//       .  .*  ?:  ::

	// =, (), [], -> �� ��� �Լ��θ� ��������.
						
}
// ������ ������ �Լ��� ���� �߿� �Ѱ� �̻��� �ݵ�� user type�� �־�� �Ѵ�.
int operator+(int a, int b)
{
	return a - b;
}
int n = 3 + 2;

// ���ο� �����ڸ� ����� ����.
int operator+&(int a, int b) {}  // error

// �켱������ ������� �ʴ´�.