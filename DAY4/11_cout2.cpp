// 6_cout - 187page
//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		// 주의, 반환타입은 "ostream" 이 아닌 "ostream&" 이어야 합니다.
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



// cout 으로 출력할때가 printf보다 느린 이유도 저것과 관련 있는 건가요?
// => cout 이 내부적으로 출력전에 아주 다양한 작업을 합니다.
// => 그래서, printf 보다 안전하고 기능이 많지만, "느리다"는 단점도 있습니다

// C++23 에서 printf 만큼 빠른 cout 도 제공될 예정입니다.



