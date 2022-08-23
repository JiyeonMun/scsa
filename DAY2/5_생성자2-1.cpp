// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// 앞의 2번소스처럼 2개 만들어도 되고, 
	// 아래 처럼 디폴트 파라미터로 처리해도 됩니다.
	Person(const std::string& n = "unknown", int a = 0)
	{
		std::cout << "인자 2개 생성자 호출됨" << std::endl;
		name = n;
		age = a;
	}
};
int main()
{
	Person p1;				
	Person p2("kim", 28);	
}

// 그렇다면 디폴트 생성자는 두 번째 Person 함수(생성자)에 
// default parameter를 사용하는 것과 어떻게 다른건가요?
// => 동일한 효과를 볼수 있습니다.
// => 그렇게 해도 됩니다.


