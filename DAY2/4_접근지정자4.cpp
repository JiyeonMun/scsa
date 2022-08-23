#include <iostream>
#include <string>

// C++ ��Ÿ��
// => ���� �����ڸ� �ѹ� ������ ���ο� ���� �����ڰ� ���ö� ���� ����
class Person
{
private:
	std::string name;
	int  age;

public:
	void setAge(int a)
	{
		if (age > 0 && age < 150)
			age = a;
	}
};

// C#, java ���� �ٸ� ��ü���� ���
// => ��� ���� ���� �����ؾ� �մϴ�.
// => �Ʒ� �ڵ�� C++ ������ �ƴϹǷ� ������ �ȵ˴ϴ�.
class Person
{
	private	std::string name;
	private int  age;

	public void setAge(int a)
	{
		if (age > 0 && age < 150)
			age = a;
	}
};
