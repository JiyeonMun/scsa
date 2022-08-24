#include <iostream>

// 방법 3. static member data(정적 멤버 데이타) 사용

// 1. static member data는 반드시 클래스 외부에서 선언되어야 한다.
// 2. 객체를 한개도 만들지 않아도 static member data는 메모리에 놓인다.
// 3. 객체 생성시, static이 아닌 멤버만 객체의 메모리에 놓인다.
// 4. static 멤버 데이타는 모든 객체가 공유 한다.

// => 결국, 접근 지정자를 사용할수 있는 "전역변수"
// => Car 멤버 함수 에서만 접근 할수 있는 "전역변수" 의 의미!!
//    (cnt 가 private 이라면)

// 클래스 당 한 개밖에 못만드나요? => 여러개 만들어도 됩니다.


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

	// 핵심 2. 객체 생성시, static 이 아닌 멤버 데이타만
	//        객체 메모리에 놓이게 됩니다.
	Car c1;
	Car c2;

	// 핵심 3. static 멤버 데이타는 2가지 방법으로 접근 가능합니다
	//		(단, public 인 경우만)
	// 1. 클래스이름 으로 접근 : Car::cnt   
	// 2. 객체이름 으로 접근   : c1.cnt

	std::cout << Car::cnt << std::endl; // 2
	std::cout << c1.cnt << std::endl;	// 2	
	std::cout << c2.cnt << std::endl;	// 2
	// => 그런데, "c1.cnt" 하면 cnt 가 static 멤버 인지 아닌지 구별이 안됩니다.
	// => 되도록이면 "Car::cnt" 사용하세요

	// 왜 2가지 방법이 되게 해놓고, "이렇게 하라 라고 권장하나요 ?"
	// "차라리 "Car::cnt" 로만 접근할수 있다" 라고 하는 것이 좋지 않나요 ?

	// => 그래서, java, C# 등의 다른 언어는 "클래스이름으로만 접근가능"
	//    합니다.
	// C++ 문법이 너무 복잡하게된 경우.


}

