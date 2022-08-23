#include <iostream>
#include <string>

// struct vs class
// => C++ ������ "�� �Ѱ���"�� �������� �ֽ��ϴ�.

// struct : ���������� ������ "public"  �� ����Ʈ
// class  : ���������� ������ "private" �� ����Ʈ


// ��, C#, java, swift ���� �ٸ� ��ü���� ����
// => struct �� class �� �������� ���� �����ϴ� - �� ��� ����

// ����
// => ���� ��� ��ü���� ���� "����������(private, public)"�� �����մϴ�.
// => ��, "���̽�(Python)" �� �� ������ �����ϴ�.


//struct Person
class Person
{
//private:
	std::string name;
	int  age;

public:
	void setAge(int a)
	{
		if (age > 0 && age < 150)
			age = a;
	}
};

int main()
{
	Person p;

	p.setAge(-10);
}

