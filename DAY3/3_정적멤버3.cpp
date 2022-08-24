#include <iostream>

// 방법 3.

class Car
{
	int color;
public:

//	int cnt = 0;	// 객체당 한개씩 생성

	static int cnt;	// 1. 모든 객체가 공유	
					// 2. 반드시 클래스 외부에 선언되어야 한다.

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static member data는 반드시 클래스 외부에서도 선언되어야 합니다.
int Car::cnt = 0; // 초기값은 여기에서..






int main()
{
	Car c1;
	Car c2;

	std::cout << cnt << std::endl; // 2

	// 그런데, 전역변수는 항상 안전하지 않습니다.
	cnt = 100; // 사용자가 실수 했다.(오타등)
}

