// temporary1
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	~Point() { std::cout << "~Point()" << std::endl; }
};
//-----------------------
int x = 10;
int  f1() { return x; } // x ��ü�� ��ȯ�� �ƴ� "10" ��ȯ �Դϴ�.
int& f2() { return x; } // x �� ���� ��ȯ


Point pt(1, 2);
//Point f3() { return pt; } // pt ��ü�� ��ȯ�� �ƴ� 
							// pt �� ������ "���Ͽ뵵�� �ӽð�ü"�� ��ȯ��
							// 
Point& f3() { return pt; } // �ӽð�ü�� �ƴ� ��¥ pt ��ȯ(����)

int main()
{
	f3();
	std::cout << "--------" << std::endl;
}



