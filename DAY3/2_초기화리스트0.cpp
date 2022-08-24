#include <iostream>
#include <string>

class Point
{
	int x;
	int y;
public:
	// 생성자에서 멤버 데이타를 초기화 하는 2가지 방법
	// 1. member initializer list : 생성자 () 뒤에 :을 적고 초기화하는것
	// 2. 생성자 블럭 안에서 "x = a" 처럼 코드를 작성 하는 것

	Point(int a, int b) : x(a), y(b)   // 1. 초기화
	{
//		x = a; // 2. 초기화가 아닙니다. 대입 입니다.
//		y = b;  
	}
};

int main()
{
	Point p1(1,2);


	// 초기화 vs 대입
	int a = 10; // 초기화, 변수를 만들면서 값을 넣는것
	

	int b;
	b = 10;	// 대입, 변수를 만든후에 값을 넣는것

	// primitive type   : 초기화와 대입은 거의 동일한 기계어 코드 생성됩니다.
	// user define type : 초기화가 빠릅니다.

	std::string s1("hello"); // 인자가 한개인 생성자를 호출해서 초기화.
							 // 즉, 1회의 함수 호출로 초기화 끝!

	std::string s2;	// 1. 인자가 없는 생성자(디폴트 생성자) 호출
	s2 = "hello";	// 2. "s2.operator=("hello")" 라는 함수호출
					// 즉, 2회의 함수호출이 발생해서 s2가 "hello" 보관

}

