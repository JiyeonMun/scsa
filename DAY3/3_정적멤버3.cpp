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
	// 핵심 1. static member data 는 "객체를 생성하지 않아도"
	//        메모리에 생성됩니다.
	//		 "클래스이름::멤버이름" 으로 접근 가능합니다.
	std::cout << Car::cnt << std::endl; // 0

	Car c1;
	Car c2;

}

