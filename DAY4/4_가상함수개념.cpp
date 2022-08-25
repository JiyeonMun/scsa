// 7_가상함수1  144 page ~
#include <iostream>

// "가상함수" 개념 : 모든 객체지향 언어에서 가장 중요한 특징중 한개 입니다.

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// function override : 기반 클래스 멤버 함수를 파생클래스가 재정의하는것

	// overloading과  다릅니다. : square(int) , square(double)

	void Cry1() { std::cout << "Dog Cry1" << std::endl; }  // 2
};


int main()
{
	Animal a; a.Cry1(); // 1
	Dog    d; d.Cry1(); // 2

	Animal* p = &d;		

//	if (사용자 입력값 == 1) p = &a;

	p->Cry1();	// 논리적으로는 Dog Cry 가 맞습니다. 그런데,
				// C++, C#      : Animal Cry
				// java, python, swift, 대부분의 언어 : Dog Cry			
}


// p->Cry1() 을 어떤 함수와 연결할것인가 ? 함수 바인딩( 161 page)

// 1. static binding : 어떤 함수를 호출 할지를 컴파일시간에 컴파일러가 결정
//					   컴파일러는 p의 타입이 "Animal*" 라는 것은 알수 있다.
//						하지만, p가 가리키는 곳에 어떤 객체가 있는지는 
//						알수 없다. (실행할때 변경될수 있으므로)
//						따라서, 컴파일러가 호출을 결정하면
//						p의 타입으로 결정
//						Animal* p 이므로 Animal::Cry1() 호출
// 비 논리적, 빠르다.
// C++, C# 멤버 함수의 기본 바인딩 정책

// 2. dynamic binding : 컴파일 할때는 p가 가리키는 곳을 조사하는 기계어코드생성
//						실행할때 메모리 조사후 함수 호출 결정
//						p 가 Dog 객체를 가리키면 "Dog::Cry1" 호출
// 논리적, 느리다.
// java, swift 등의 대부분의 객체지향 언어의 방식
// C++/C# 의 가상함수는 dynamic binding 사용

// C++, C#                    : 위 2개 방식 모두 가능, 사용자가 코드로 지정
// java, python 등 대부분의 언어 : dynamic binding 만 사용

// 그럼 c는 static binding 정책이 기본인가요?
// => static 인데, C는 상속이 없으므로.. 위 내용이 중요하지는 않습니다.


