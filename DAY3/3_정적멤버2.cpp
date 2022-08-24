// 3_정적멤버1 - 110 page
#include <iostream>

// 방법 2. 전역변수
// => 전역변수는 오직 한개만 있고, 어디서도 접근 가능하다.
// => 객체의 갯수 파악 성공

// 단점 : 전역변수는 어디서도 접근 가능하기때문에 안전하지 않다.
// => private 등으로 보호 할수 없을까?
// => 전역변수는 "멤버"가 아니므로 접근지정자를 사용할수 없다.

int cnt = 0;

class Car
{
	int color;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};
int main()
{
	Car c1;
	Car c2;

	std::cout << cnt << std::endl; // 2

	// 그런데, 전역변수는 항상 안전하지 않습니다.
	cnt = 100; // 사용자가 실수 했다.(오타등)
}

