// 3_정적멤버1 - 110 page
#include <iostream>


// Car 타입의 객체가 몇개 생성되었는지, 갯수를 파악하고 싶다.
// => 모든 객체는 만들때 "생성자호출", 
// => 파괴 될때 "소멸자 호출" 된다.

// 방법 1. 멤버 데이타 cnt 사용
// => 멤버 데이타는 "객체당 한개씩" 따로 만들어진다.
// => 객체의 갯수 파악 실패!!

class Car
{
	int color;
public:
	int cnt = 0;

	Car()  { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl; 
}

