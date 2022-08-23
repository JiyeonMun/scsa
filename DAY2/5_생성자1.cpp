// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;

public:
	void init(const std::string& n, int a)
	{
		name = n;
		age = a;
	}

	// 생성자 : 클래스(구조체)이름과 동일한 이름의 함수
	// 1. 반환 타입을 표기하지 않고, 반환값도 없다.
	// 2. 객체를 생성하면 자동으로 호출된다.
	// 3. 인자는 있어도 되고 없어도 된다. 2개이상 만들수 있다.
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};
int main()
{
	// 구조체는 아래 처럼 모든 멤버를 초기화 할수 있습니다.
	// 클래스도 "구조체" 와 동일 합니다.
	// 단, 모든 멤버가 public 에 있을때만 가능합니다
//	Person p = { "kim", 28 }; // error. 멤버 데이타가 private

//	Person p;			// 1. 객체 생성후
//	p.init("kim", 28);	// 2. 초기화 를 위해 init() 멤버 함수 호출

	Person p("kim", 28); // 모든 객체는 생성될때 생성자를 호출한다.
}



