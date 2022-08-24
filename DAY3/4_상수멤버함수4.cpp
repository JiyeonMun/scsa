#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0);

	void set(int a, int b);
	void print() const;
};
// 핵심 1. 상수 멤버 함수는 "선언과 구현에 모두 표기해야 합니다."
// 2. 디폴트 파라미터는 선언에만 표기하세요
// 3. 생성자의 멤버 초기화 리스트는 구현쪽에 표기해야 합니다.

Point::Point(int a /* = 0*/, int b /*= 0*/) : x(a), y(b) 
{
}
void Point::set(int a, int b) 
{ 
	x = a; 
	y = b;
}

void Point::print() const 
{
	std::cout << x << ", " << y << std::endl;
}




int main()
{

}

