#include <iostream>

class Bike
{
	int gear = 0;
public:
//	void setGear(int n) { gear = n; }

	// friend 함수 : 멤버 함수가 아닌 일반 함수 지만, 
	//				private 접근 가능하게 해달라는 것.
	friend void fixBike();

	// 1. 멤버 함수로 하면 되는데? 왜 일반 함수로 만드나요 ?
	// => 멤버로 만들수 없는 경우가 있습니다.(주로 연산자 재정의 문법에서)

	// 2. get/set 을 제공하면 되지 않나요 ?
	// => get/set 을 제공하는 것은 "모든 곳에서 접근 가능" 하게 한다는 것
	// => friend 는 특정 함수에게만 허용하는것

};

void fixBike()	// 멤버 함수가 아닙니다.
{
	Bike b;
	b.gear = 10; // error 아님.
}



int main()
{
	fixBike();
}