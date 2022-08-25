// 6_cout - 187page
//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		// 아래 3개뿐 아니라 모든 기본 타입에 대해서
		// operator<<() 함수가 모두 있습니다.
		// 주의 : 실제 출력은 printf()가 아니라, 각 OS가 제공하는
		//       내부함수("시스템콜" 이라고 합니다.) 사용
		// windows : WriteConsole(), linux : write()
		void operator<<(int n)    { printf("%d", n); }
		void operator<<(double d) { printf("%lf", d); }
		void operator<<(const char* s) { printf("%s", s); }
	};
	ostream cout; // ostream  타입의 객체 인데, "std" 안에 있습니다
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(n) => cout.operator<<(int)
	std::cout << d; // cout.operator<<(d) => cout.operator<<(double)
	
}


