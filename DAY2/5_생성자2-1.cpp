// 5_������1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// ���� 2���ҽ�ó�� 2�� ���� �ǰ�, 
	// �Ʒ� ó�� ����Ʈ �Ķ���ͷ� ó���ص� �˴ϴ�.
	Person(const std::string& n = "unknown", int a = 0)
	{
		std::cout << "���� 2�� ������ ȣ���" << std::endl;
		name = n;
		age = a;
	}
};
int main()
{
	Person p1;				
	Person p2("kim", 28);	
}

// �׷��ٸ� ����Ʈ �����ڴ� �� ��° Person �Լ�(������)�� 
// default parameter�� ����ϴ� �Ͱ� ��� �ٸ��ǰ���?
// => ������ ȿ���� ���� �ֽ��ϴ�.
// => �׷��� �ص� �˴ϴ�.


