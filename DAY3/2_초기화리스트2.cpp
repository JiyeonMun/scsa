#include <iostream>

class Point
{
	int x, y;
public:
	// 핵심 : Point 클래스는 디폴트 생성자가 없습니다.
	// Point p1;      // error 입니다.
	// Point p2(1,2); // ok

//	Point()				: x(0), y(0) { std::cout << "Point()" << std::endl; }
	Point(int a, int b) : x(a), y(b) { std::cout << "Point(int, int)" << std::endl; }
};

// 현재 코드가 에러나지 않도록 Rect 클래스를 수정해 보세요.

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	// 사용자 코드		컴파일러가 변경한 코드
//	Rect()				// Rect() : ptFrom(), ptTo()

	// 디폴트 생성자가 없는 타입이 멤버로 있다면
	// 반드시 사용자가 "초기화 리스트"에서 명시적으로 생성자 호출 모양을 작성해야
	// 합니다.
	Rect() : ptFrom(0, 0), ptTo(0, 0)
	{
		std::cout << "Rect()" << std::endl;
	}
};

int main()
{
	Rect r; 
}




