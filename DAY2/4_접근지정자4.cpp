#include <iostream>
#include <string>

// C++ 스타일
// => 접근 지정자를 한번 적으면 새로운 접근 지정자가 나올때 까지 적용
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

// C#, java 등의 다른 객체지향 언어
// => 멤버 별로 따로 지정해야 합니다.
// => 아래 코드는 C++ 문법이 아니므로 컴파일 안됩니다.
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
