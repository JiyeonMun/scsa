#include <iostream>

class Animal
{
public:
	// non-virtual : static binding �Դϴ�.
	//			     ������ Ÿ������ �Լ� ȣ���� ����
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } 


	// virtual function : dynamic binding �Դϴ�.
	//					  �����Ͱ� ����Ű�� ��ü�� ���� �Լ� ȣ�����
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



