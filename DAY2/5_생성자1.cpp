// 5_������1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;

public:
	void init(const std::string& n, int a)
	{
		name = n;
		age = a;
	}

	// ������ : Ŭ����(����ü)�̸��� ������ �̸��� �Լ�
	// 1. ��ȯ Ÿ���� ǥ������ �ʰ�, ��ȯ���� ����.
	// 2. ��ü�� �����ϸ� �ڵ����� ȣ��ȴ�.
	// 3. ���ڴ� �־ �ǰ� ��� �ȴ�. 2���̻� ����� �ִ�.
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};
int main()
{
	// ����ü�� �Ʒ� ó�� ��� ����� �ʱ�ȭ �Ҽ� �ֽ��ϴ�.
	// Ŭ������ "����ü" �� ���� �մϴ�.
	// ��, ��� ����� public �� �������� �����մϴ�
//	Person p = { "kim", 28 }; // error. ��� ����Ÿ�� private

//	Person p;			// 1. ��ü ������
//	p.init("kim", 28);	// 2. �ʱ�ȭ �� ���� init() ��� �Լ� ȣ��

	Person p("kim", 28); // ��� ��ü�� �����ɶ� �����ڸ� ȣ���Ѵ�.
}



