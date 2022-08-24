// 4_상수멤버함수1.cpp    119 page ~
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	// 상수 멤버 함수 
	// => 멤버 함수 안에서 멤버 데이타를 수정하지 않겠다고 컴파일러에게 알려주는 것
	// => 멤버 데이타를 수정하는 코드가 있으면 에러
	// => 상수 객체를 "상수 멤버 함수" 만 호출가능하다.

	void print() const 
	{	
//		x = 100; // error. 상수 멤버함수는 멤버 데이타 수정 안됨.

		std::cout << x << ", " << y << std::endl;
	}
};


int main() 
{
//	Point p(1, 2);

	// 핵심 : p 가 "상수 객체" 입니다.
	const Point p(1, 2); 

	p.x = 10; // error. x 는 public 이지만
			  // p가 상수 객체 이므로, 값을 변경할수 없다.

	p.set(10, 20);	// error. 

	p.print();		// 상수 멤버 함수 가 아니면 error. 
					// 상수 멤버 함수 라면 에러 아님.
}

