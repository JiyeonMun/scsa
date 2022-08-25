#include <iostream>

class Base
{
	int x;
public:
	Base() { std::cout << "Base()" << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};
class Derived : public Base
{
	int y;
public:
	// 사용자 코드		// 컴파일러가 변경한 코드
	Derived()			// Derived() : Base()
	{ 
		std::cout << "Derived()" << std::endl; 
	}
	Derived(int a)		// Derived(int a) : Base()		
	{					//		=> 컴파일러가 생성한 코드는 항상 기반클래스의
						//		   디폴트 생성자 호출
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived() 
	{ 
		std::cout << "~Derived()" << std::endl; 

		// 소멸자는 파생 클래스 소멸자 구문이 먼저실행되고, 
		// "기반 클래스 소멸자 호출 코드"를 컴파일러가 추가
		// ~Base()
	}
};

int main()
{
	//	Derived d1;	// call Derived()
	Derived d2(5);  // call Derived(5)
}




