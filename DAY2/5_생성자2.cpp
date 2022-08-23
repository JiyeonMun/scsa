// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// 생성자도 "오버로딩 가능" 합니다.
	// => 인자의 갯수나 타입에 따라 여러개 만들수 있다는것
	Person()		
	{
		std::cout << "인자 없는 생성자 호출됨" << std::endl;
						// => 인자 없는 생성자를 "디폴트 생성자"라고 합니다.
		name = "unknown";
		age = 0;
	}
	Person(const std::string& n, int a)
	{
		std::cout << "인자 2개 생성자 호출됨" << std::endl;
		name = n;
		age = a;
	}	
};
int main()
{
	Person p1;				// 인자 없는 생성자 호출
	Person p2("kim", 28);	// 인자 2개 생성자 호출
}
// 이름이나 나이를 비워 두고 싶은 경우에는 생성자를 쓰지 않고 
// init함수를 만드는 게 가장 좋은 방법인가요?
// => 위 디폴트 생성자에서 "name", "age" 초기화 안하면 됩니다.
// => 하지만, 모든 변수(객체)는 초기화 하는 것이 항상 안전하고 좋습니다.




