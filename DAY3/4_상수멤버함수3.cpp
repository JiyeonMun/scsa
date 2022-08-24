#include <iostream>

class Test
{
public:
	// 이름과 인자가 동일한 함수를 
	// 상수멤버 함수, 비상수 멤버함수로 해서 2개 만들수 있습니다.
	void foo()       { std::cout << "foo" << std::endl; }		// 1
	void foo() const { std::cout << "foo const" << std::endl; }	// 2
};

int main()
{
	Test t;		// 상수 객체 아님.
	t.foo();	// 1번 호출
				// 1번이 없으면 2번 호출
				// => 즉, 상수가 아닌 객체는 모두 호출 가능.

	const Test ct;	// 상수 객체, 상수 객체는 상수 함수만 호출가능
	ct.foo();		// 2번 호출, 없으면 에러.
}

