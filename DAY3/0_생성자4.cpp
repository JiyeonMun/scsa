#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	// 사용자 코드		
	Rect()				 
	{	
		// 컴파일러가 생성자 앞부분에..
		// leftTop, rightBottom 에 대해 생성자를 호출하는 코드를 생성

		std::cout << "Rect()" << std::endl;
	}
};
// 결론 : 객체 생성시, 모든 멤버 데이타의 생성자도 호출됩니다.
//       Rect() 생성자안에서, leftTop, rightBottom 생성자를 호출하는
//	     코드를 컴파일러가 추가해 주는것.


int main()
{
	Rect rc; // 1. sizeof(Rect) 크기의 메모리를 스택에 할당
		     // 2. call Rect() 함수(생성자)를 호출
}
