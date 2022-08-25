// 6_cout - 187page
//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		// �Ʒ� 3���� �ƴ϶� ��� �⺻ Ÿ�Կ� ���ؼ�
		// operator<<() �Լ��� ��� �ֽ��ϴ�.
		void operator<<(int n)    { printf("%d", n); }
		void operator<<(double d) { printf("%lf", d); }
		void operator<<(const char* s) { printf("%s", s); }
	};
	ostream cout; // ostream  Ÿ���� ��ü �ε�, "std" �ȿ� �ֽ��ϴ�
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(n) => cout.operator<<(int)
	std::cout << d; // cout.operator<<(d) => cout.operator<<(double)
	
}


