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

	// p->Cry()�� ���� �����Ϸ��� �����ϴ� ���
	// 1. �����Ϸ��� p�� Animal* ��� �͸� �˰� �ִ�.

	// 2. ����, "Animal" Ŭ�������� Cry1(), Cry2()�� virtual ���� �ƴ��� �����Ѵ�

	p->Cry1();  // Animal Ŭ�������� Cry1 �� virtual�� �ƴմϴ�.
				// ����, ������ "call Animal::Cry1()" ȣ���ڵ� ����

	p->Cry2();  // Animal Ŭ�������� Cry2 �� virtual �Դϴ�.

				// "p�� ����Ű�� ���� ��������, ����� ���� 
				//  Animal::Cry2() �Ǵ� Dog::Cry2()�� ȣ���ϴ�
				//  ���� �ڵ� ����"
				
				// ���� �ڵ常 ������ ��� �Լ��� ȣ���ϴ��� �˼� ����.
				// ������ ���� �����ȴ�.
}



