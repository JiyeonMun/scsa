//  5_연산자재정의 - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	Point operator+(const Point& pt)
	{
		std::cout << "member operator+" << std::endl;

		Point temp(x + pt.x, y + pt.y);
		return temp;
	}

	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "non-member operator+" << std::endl;

	Point  temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// member vs non-member
	// member 가 좋다는 의견 : private 접근은 member가 좋다.
	// non-member 의견     : 멤버로 안될때가 있다.
	//						1번째 인자가 user type 이 아닐때..(아래참고)
	int n = 0;
	Point p3 = p1 + p2; // p1.operator+(Point)
	Point p4 = p1 + n;	// p1.operator+(int)
	Point p5 = n  + p2; // n.operator+(Point) 가 필요한데, n는 primitive 타입
						// => operator+(int, Point) 로 하면된다.

	// java : 연산자 재정의 안됨
	// C#, Python : 주요한 연산자 20~30여개 재정의 가능
	// C++ : 4개 연산자 빼고 모두 재정의 가능 ( 186 page)
	//       .  .*  ?:  ::

	// =, (), [], -> 는 멤버 함수로만 구현가능.
						
}
// 연산자 재정의 함수는 인자 중에 한개 이상은 반드시 user type이 있어야 한다.
int operator+(int a, int b)
{
	return a - b;
}
int n = 3 + 2;

// 새로운 연산자를 만들수 없다.
int operator+&(int a, int b) {}  // error

// 우선순위는 변경되지 않는다.