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

	p->Cry1(); //  static binding   Animal Cry1
	p->Cry2(); // dynamic binding   Dog    Cry2
}



