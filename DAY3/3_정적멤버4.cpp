#include <iostream>


class Car
{
	int color;
	static int cnt;	
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	// non-static 멤버 함수
	// => 반드시 객체를 만들어야만 호출가능합니다.
	// => "c1.getCount()" 처럼, c1이 필요 합니다.
	//int getCount() { return cnt; } 

	// static 멤버 함수, 객체가 없어도 호출가능합니다.
	// "Car::getCount()" 또는 "c1.getCount()" 도 가능
	// => 권장 : 클래스이름으로 호출
	static int getCount() { return cnt; }
};
int Car::cnt = 0;  // private 이라도 이코드는 가능합니다.

int main()
{
	std::cout << Car::getCount() << std::endl; 

	Car c1;
	Car c2;

	std::cout << Car::getCount() << std::endl;
//	std::cout << c1.getCount() << std::endl;// 가능하지만 위코드 권장

	std::cout << Car::cnt << std::endl; // error. private
}

// 이제 Car::cnt 는
// 1. 모든 Car 객체가 공유
// 2. Car 멤버 함수만 변경가능
// 3. 읽어 오려면 "Car::getCount()" 사용


// Car::cnt도 객체가 없어도 부를 수 있는데...
// => 지금은 안됩니다. private

// 정적 멤버 함수는 정적 멤버데이터와 달리 클래스 외부에 따로 선언 할 필요가 없는건가요 ? 
// => 네..

// 그렇다면 데이터는 왜 굳이 따로 선언이 필요한 걸까요 ?
// => 객체가 없어도 "메모리에 놓이게 하기 위해서" 입니다.
