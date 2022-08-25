// 상속과 생성자.   135page ~
#include <iostream>

// 1. 파생 클래스 객체 생성시, "기반 클래스 생성자"도 호출됩니다.
// 2. 순서.
// 3. 기반 클래스는 항상 디폴트 버전 호출

// 그런데, 항상, 
// => 소스의 실행 결과를 가지고 문법을 예측하지 마세요
// => 각 언어의 정확한 표준 문법(표준 문서)를 학습하고, 결과를 이해 하세요

// 4. 핵심은 "정확한 원리" 입니다.

class Base
{
	int x;
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};
class Derived : public Base
{
	int y;
public:
	Derived()       { std::cout << "Derived()" << std::endl; } 
	Derived(int a)  { std::cout << "Derived(int)" << std::endl; }
	~Derived()      { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d1;	
	Derived d2(5);
}




