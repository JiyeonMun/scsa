// 5_������1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	Person(const std::string& n, int a)
	{
		std::cout << "������ ȣ���" << std::endl;
		name = n;
		age = a;
	}
	Person()
	{
		name = "unknown";
		age = 0;
	}
	// �Ҹ��� : "~Ŭ�����̸�" ����� �Լ�
	//			��ȯ���� ���ڰ� ����. ���� �Ѱ��� ����� �ִ�.
	//		    ��ü�� �ı� �ɶ� ȣ��.
	~Person() { std::cout << "�Ҹ���" << std::endl; }
};
int main()
{
	// ��� ���� ����(��ü)�� �ڽ��� ������ ���� ���� ���� �ı� �˴ϴ�.
	{
		Person p2;
		
		{

			Person p1("kim", 28);
			std::cout << "1st block end" << std::endl;

		}	// <= p1 �ı�, �Ҹ��� ȣ��

		
		std::cout << "2nd block end" << std::endl;

	}	// <= p2 �ı� �Ҹ��� ȣ��

	std::cout << "main ����" << std::endl;
} 

// ����
// ������(constructor) : ��ü�� �����Ҷ� �ڵ����� ȣ��, ��ü�� �ʱ�ȭ�ϱ� ���� ���
// �Ҹ���(destructor)  : ��ü�� �ı� �ɶ� �ڵ����� ȣ��.

// �׷���, �Ҹ��ڴ� ��?? �ʿ� �Ѱ��� ?
// => �ʿ� ������ ������ ������
// => �ʿ� �Ҷ��� ����� �˴ϴ�(Vector ����)
