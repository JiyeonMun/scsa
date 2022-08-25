#include <iostream>
#include <vector>

class Person
{
	std::string name;
	int age;
public:
	Person(const std::string& s, int a) : name(s), age(a)
	{
	}
};
// Student ���弼��.(Person ���� ���, int id �߰�, ������ ���弼��)
class Student : public Person
{
	int id;
public:
	// ����� �ڵ�				// �����Ϸ� ���� �ڵ�
//	Student(int n) : id(n) {}	// Student(int n) : Person(), id(n) {}

//	Student(int n) : Person("s", 0), id(n) {}	
							// �� �ڵ�� ������ ������ ������,
							// ��� �л��� �̸��� ���̰� �����մϴ�.

	Student(const std::string& s, int a, int n) 
				: Person(s, a), id(n) {}

	// �Ʒ� �ڵ�� name, age �� private �̶� �ȵ˴ϴ�.
//	Student(const std::string& s, int a, int n)
//		: name(s), age(a), id(n) {}

};

int main()
{
	// Student ��ü ���� �ϴ� �ڵ嵵 ���弼��
	Student s("kim", 20, 99);
}
// �ʱ�ȭ ����Ʈ �ۼ���, ��� Ŭ���� ������ ȣ��� �ڽ��� ��� �ʱ�ȭ������
// ��� �ϳ��� ?
// => ��� Ŭ���� �����ڸ� ���� ȣ���ϼ���
// => ���� �ٲ㵵 �Ǵµ�, ������ ������ ��� Ŭ���� �����ڰ� ���� ȣ��

//	: Person(s, a), id(n) {}  <= ����
//	: id(n), Person(s,a)  {}  <= �̰͵� �� ������ �˴ϴ�.
//							�̷��� �ص� ������ "Person(s,a)" ��������˴ϴ�.

