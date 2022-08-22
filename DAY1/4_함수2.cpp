#include <cstdio>
// 4_함수2 
// C 언어 : 동일이름의 함수를 2개 만들수 없습니다.
// C++언어: 인자의 갯수나, 인자 타입이 다르다면 동일이름의 함수를
//		   여러개 만들수 있습니다.
//         => "함수 오버로딩(overloading)" 이라고 합니다.

// 대부분의 언어는 "함수 오버로딩을 지원" 합니다(java, C#, swift 등)
// C, Python 이 이 문법을 지원하지 못합니다.

int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);
}

// 주의 사항 : 함수 호출시 어느 함수를 호출할지 반드시 구별 가능해야 합니다.
void f1(int a)    {}
void f1(double a) {}

f1(3.4); // ok.. f1(double)

void f2(int a) {}
void f2(int a, int b = 0) {}
f2(10); // error. 어느 함수를 호출할지 알수 없습니다.

char f3(int a) { return 0; }
void f3(int a) {}

f3(5);	// error. 어느 함수를 호출할지 알수 없습니다.
		// 리턴 타입이 아닌 "인자의 모양이 달라야 합니다."

