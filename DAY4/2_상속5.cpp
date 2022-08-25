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
// Person 에서 상속받는 Student 만드세요
// => int id 추가하세요
// => 생성자에서 초기화하는 코드 만드세요..

int main()
{
//	Person p;	// 이렇게 만들수 있게 하면
				// => 초기화되지 않은 객체의 생성입니다. 좋지 않습니다.

	Person p("kim", 20); // ok
}



