#include <iostream>

class Point
{
	int x, y;
public:
	// this는 언제 사용하나요 ?
	// => 많이 사용하지는 않지만, 전형적인 패턴이 있습니다.
	void set(int x, int y) 
	{
		// 1. 이름 충돌 발생시. 
//		x = x;	// 이렇게 하면 둘다 인자의 x
		
		this->x = x; // 멤버 임을 명확히 하려면 this 사용
		this->y = y;
	}

	// 2. 멤버 함수가 this를 반환하는 경우가 종종 사용됩니다.
	Point* foo() { return this; }
	Point  goo() { return *this; }
};
int main()
{
	Point p1;
	p1.set(10, 20);

	// this(또는 *this) 를 반환하면 "멤버 함수의 연속적 호출이 가능합니다."
	p1.foo()->foo()->foo();
	p1.goo().goo().goo();

	std::cout << "A" << "B" << "C";
	// cout.operator<<("A").operator<<("B").operator<<("C")


}
