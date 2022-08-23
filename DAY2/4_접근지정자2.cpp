// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 접근 지정자 : private, public
// => 구조체 안에 여러번 적어도 됩니다.

// 캡슐화 (encapsulation )
// => 멤버 데이타는 private 에 놓아서 외부의 잘못된 사용으로 부터
//    객체의 상태가 불안해 지는 것을 막는다.

// => 객체의 상태는 잘 정의된 멤버 함수를 통해서만 변경할수 있다.

// 타입을 만들때 
// "잘못 사용하기 어렵게"
// "제대로 사용하기 쉽게" 설계 하라.!

// 2일차, 3일차 배우는 것 : 안전하고, 사용하기 쉬운 타입 만들때 
//						 필요한 문법 
// 4일차 : 타입을 활용해서 프로그램 전체를 "객체지향"으로 설계


struct Person
{
private:
	std::string name;
	int  age;

public:
	void setAge(int a)
	{

		if (age > 0 && age < 150)
			age = a;
	}
};



int main()
{
	Person p;

	p.setAge(-10);
}
