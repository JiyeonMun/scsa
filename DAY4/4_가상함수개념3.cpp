#include <iostream>

class Animal
{
public:
	// non-virtual : static binding 입니다.
	//			     포인터 타입으로 함수 호출을 결정
	void Cry1() { std::cout << "Animal Cry1" << std::endl; }


	// virtual function : dynamic binding 입니다.
	//					  포인터가 가리키는 객체에 따라서 함수 호출결정
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; }
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }
	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }
};


int main()
{
	Animal a;
	Dog    d;

	Animal* p = &d;

	// p->Cry()를 보고 컴파일러가 동작하는 방식
	// 1. 컴파일러는 p가 Animal* 라는 것만 알고 있다.

	// 2. 따라서, "Animal" 클래스에서 Cry1(), Cry2()가 virtual 인지 아닌지 조사한다

	p->Cry1();  // Animal 클래스에서 Cry1 은 virtual이 아닙니다.
				// 따라서, 무조건 "call Animal::Cry1()" 호출코드 생성

	p->Cry2();  // Animal 클래스에서 Cry2 는 virtual 입니다.

				// "p가 가리키는 곳을 조사한후, 결과에 따라 
				//  Animal::Cry2() 또는 Dog::Cry2()를 호출하는
				//  기계어 코드 생성"
				
				// 기계어 코드만 봐서는 어느 함수를 호출하는지 알수 없다.
				// 실행해 봐야 결정된다.
}



