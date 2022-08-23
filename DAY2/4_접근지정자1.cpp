// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 사원 관리 프로그램을 작성해야 한다.
// => 사람을 관리해야 한다.
// => "Person" 타입을 먼저 설계하자.
// => "Person" 구조체 안에 어떤 데이타를 넣을지를 잘 판단해야 한다.

struct Person
{
private:				// private 접근 지정자
						// 이 영역에 있는 멤버는, 멤버 함수만 접근가능하고
						// 멤버 함수가 아닌 곳에서는 접근 할수 없습니다.
	std::string name;
	int  age;		

public:
	void setAge(int a)
	{
		// 인자 값의 유효성을 확인후에
		// 인자 값이 유효한 경우에만 객체의 상태(나이)를 변경한다.
		// 잘못된 값이 전달되었을때는 "무시" 하거나 다양한 방식으로 "에러"처리
		// => 마지막날 배우게 됩니다.
		if ( age > 0 && age < 150 )
			age = a;
	}
};

int main()
{
	Person p;

//	p.age = -10; // Person 사용자가 초보자라서 실수 했다.
				 // 현실 세계에 존재 할수 없는 잘못된 객체가 탄생했다.
				 // "age" 가 private에 있다면 에러!
	p.setAge(-10);

				 
}
