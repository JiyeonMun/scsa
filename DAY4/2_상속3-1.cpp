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
	// ����� �ڵ�		// �����Ϸ��� ������ �ڵ�
	Derived()			// Derived() : Base()
	{ 
		std::cout << "Derived()" << std::endl; 
	}
	Derived(int a)		// Derived(int a) : Base()		
	{					//		=> �����Ϸ��� ������ �ڵ�� �׻� ���Ŭ������
						//		   ����Ʈ ������ ȣ��
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived() 
	{ 
		std::cout << "~Derived()" << std::endl; 

		// �Ҹ��ڴ� �Ļ� Ŭ���� �Ҹ��� ������ ��������ǰ�, 
		// "��� Ŭ���� �Ҹ��� ȣ�� �ڵ�"�� �����Ϸ��� �߰�
		// ~Base()
	}
};

int main()
{
	//	Derived d1;	// call Derived()
	Derived d2(5);  // call Derived(5)
}




