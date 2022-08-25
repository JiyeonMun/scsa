// 6_cout - 187page
//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		// ����, ��ȯŸ���� "ostream" �� �ƴ� "ostream&" �̾�� �մϴ�.
		ostream& operator<<(int n)         { printf("%d", n); return *this; }
		ostream& operator<<(double d)      { printf("%lf", d); return *this;}
		ostream& operator<<(const char* s) { printf("%s", s); return *this;}
	};
	ostream cout; 
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n << ", " << d << "\n";

	// cout.operator<<(n).operator<<(",").operator<<(d)
}



// cout ���� ����Ҷ��� printf���� ���� ������ ���Ͱ� ���� �ִ� �ǰ���?
// => cout �� ���������� ������� ���� �پ��� �۾��� �մϴ�.
// => �׷���, printf ���� �����ϰ� ����� ������, "������"�� ������ �ֽ��ϴ�

// C++23 ���� printf ��ŭ ���� cout �� ������ �����Դϴ�.



