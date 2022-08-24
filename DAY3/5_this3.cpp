#include <iostream>

class Car
{
public:
	// 다음중 에러는 ?
	// static member function : 객체 없이 호출
	// this : 멤버 함수를 호출할때 사용한 객체 주소
	void foo()
	{
		std::cout << this << std::endl; // 1. ok
	}
	static void goo() 
	{
		std::cout << this << std::endl; // 2. error
	}
};

int main()
{
	Car::goo(); // 객체가 없이 호출. this가 있을수 없다.

	Car c;
	c.foo(); // foo(&c) 이므로 this 는 &c
}
