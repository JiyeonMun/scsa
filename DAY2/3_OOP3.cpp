#include <iostream>

// 객체지향 프로그램의 핵심 1
// => "프로그램에서 필요한 타입을 먼저 설계해라"
// => "타입을 만들때, "상태를 나타내는 데이타"와 상태를 가지고 "연산을 하는 함수"
//     를 묶어서 타입을 만들어라.
// C 언어 : 구조체 안에 함수를 넣을수 없다.
// C++언어: 구조체 안에 함수를 넣을수 있다.

struct Rect
{
	// 멤버 데이타(필드, field 라고도 합니다.)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수(메소드, method 라고도 합니다.)
	// => 멤버 함수는 멤버 데이타에 직접 접근 가능합니다.
	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};
int main()
{
	Rect rc = { 1,1,10,10 };

//	int n1 = getRectArea(rc);
//	drawRect(rc);

	int n1 = rc.getArea();
	rc.draw();
}

