#include <iostream>

struct Point
{
	int x, y;
};

// 함수가 인자를 받는 것은 결국 변수의 초기화 구문입니다
void foo(int n)    {}  // int n = 3, int n = {3}
void goo(Point pt) {}  // Point pt = {1,2};

int main()
{
	Point p = { 1,2 };

	foo(3);
	foo({ 3 }); // C++11 부터는 이렇게도 사용합니다.

	goo(p);	
	goo({ 1,2 }); // C++11  부터 가능. 
}





