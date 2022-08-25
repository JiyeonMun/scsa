// 189(138)page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};
// ����� ���� Ÿ���� Point �� cout���� ����Ϸ��� �Ʒ� �Լ��� ������ �˴ϴ�.
std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	// os : cout �� ����(reference) �Դϴ�.
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	Point p(1, 2);

	// ����� ���� Ÿ���� ��ü�� cout���� ��� �ϱ�.
	std::cout << p; // cout.operator<<(Point) �� ������ �˴ϴ�.
					// �׷���, ostream Ŭ������ �츮�� ���� Ŭ������ �ƴϹǷ�
					// ��� �Լ��� �߰��Ҽ� �����ϴ�.
					
					// operator<<(cout, p), ��
					// operator<<(std::ostream, Point) �� ����� �˴ϴ�.

}


