//  5_연산자재정의 - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 2개의 "점을 더하는 개념" 을 만들려고 합니다.
	// 다음중 어떤 코드가 보기 좋을 까요 ?

	Point p3 = Add(p1, p2); // C 언어 스타일.

	Point p4 = p1.Add(p2);  // java 언어 스타일
	
	Point p5 = p1 + p2; // C++ 스타일 
			// 연산자란 "단축 표기의 미학"을 담고 있다고 C++ 창시자가 표현
			// 사용자 정의 타입도 덧셈이 되게 하자!


	// a + b 를 컴파일러가 해석하는 방법
	// 1. a, b 가 모두 primitive 타입이면 "일반 덧셈" 수행

	// 2. a, b 중에 한개라도 user type 이 있으면
	//    A. a.operator+(b) 가 가능하면 호출. 안되면
	//    B. operator+(a, b) 를 호출, 
	//	  A, B모두 안되면 error
}

