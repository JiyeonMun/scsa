// 5_������1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// �����ڵ� "�����ε� ����" �մϴ�.
	// => ������ ������ Ÿ�Կ� ���� ������ ����� �ִٴ°�
	Person()		
	{
		std::cout << "���� ���� ������ ȣ���" << std::endl;
						// => ���� ���� �����ڸ� "����Ʈ ������"��� �մϴ�.
		name = "unknown";
		age = 0;
	}
	Person(const std::string& n, int a)
	{
		std::cout << "���� 2�� ������ ȣ���" << std::endl;
		name = n;
		age = a;
	}	
};
int main()
{
	Person p1;				// ���� ���� ������ ȣ��
	Person p2("kim", 28);	// ���� 2�� ������ ȣ��
}
// �̸��̳� ���̸� ��� �ΰ� ���� ��쿡�� �����ڸ� ���� �ʰ� 
// init�Լ��� ����� �� ���� ���� ����ΰ���?
// => �� ����Ʈ �����ڿ��� "name", "age" �ʱ�ȭ ���ϸ� �˴ϴ�.
// => ������, ��� ����(��ü)�� �ʱ�ȭ �ϴ� ���� �׻� �����ϰ� �����ϴ�.




