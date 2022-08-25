// 상속과 생성자.   135page ~
#include <iostream>

// 아래 코드에서 에러를 모두 찾아 보세요
class Base
{
public:
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	// 사용자 코드		// 컴파일러가 변경한 코드
//	Derived(){}			// Derived()      : Base() {}
//	Derived(int a){}	// Derived(int a) : Base() {}

	// 기반 클래스에
	// 1. 디폴트 생성자가 없거나
	// 2. 아니면 의도적으로 다른 모양의 생성자를 호출하고 싶다면
	// 파생 클래스 만들때 "초기화 리스트" 모양에서 직접 호출해야 합니다.
	Derived()      : Base(0) {} // 여기서 0은 그냥, Base(int)를 호출하기위한
								// 의미 없는 값입니다.
								// 더좋은 예제는 다음소스 참고.
	Derived(int a) : Base(a) {}

	// 파생클래스에서 Derived() : Base(){} 이렇게 만들면 안되나요?
	// =>만들어도 됩니다. 
	// => 그런데, 지금은 Base 에 디폴트 생성자 없습니다.
};
// Derived(int a) {	}는 인자 수와 타입이 맞는 생성자가 Base에 있지만,
// 그래도 디폴트 생성자가 없어서 오류가 나는건가요?
// => Base 에 디폴트가 없습니다.

// Point(int a, int b) : x(a), y(b) 와 같이 초기화 리스트가 존재하는 
// 경우에는 어디에다가 Base를 넣어주나요 ?
// => 다음 예제!


int main()
{
}




