// 189(138)page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};
// 사용자 정의 타입인 Point 를 cout으로 출력하려면 아래 함수만 있으면 됩니다.
std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	// os : cout 의 별명(reference) 입니다.
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	Point p(1, 2);

	// 사용자 정의 타입의 객체를 cout으로 출력 하기.
	std::cout << p; // cout.operator<<(Point) 가 있으면 됩니다.
					// 그런데, ostream 클래스는 우리가 만든 클래스가 아니므로
					// 멤버 함수를 추가할수 없습니다.
					
					// operator<<(cout, p), 즉
					// operator<<(std::ostream, Point) 를 만들면 됩니다.

}


