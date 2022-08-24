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
int Car::cnt = 0; 

int main()
{
	std::cout << Car::getCount() << std::endl; 

	Car c1;
	Car c2;

	std::cout << Car::getCount() << std::endl;
//	std::cout << c1.getCount() << std::endl;// 가능하지만 위코드 권장
}
// 이제 Car::cnt 는
// 1. 모든 Car 객체가 공유
// 2. Car 멤버 함수만 변경가능
// 3. 읽어 오려면 "Car::getCount()" 사용


