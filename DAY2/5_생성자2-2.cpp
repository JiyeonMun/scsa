// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	Person(const std::string& n, int a)
	{
		std::cout << "생성자 호출됨" << std::endl;
		name = n;
		age = a;
	}
	Person()
	{
		name = "unknown";
		age = 0;
	}
	// 소멸자 : "~클래스이름" 모양의 함수
	//			반환값과 인자가 없다. 오직 한개만 만들수 있다.
	//		    객체가 파괴 될때 호출.
	~Person() { std::cout << "소멸자" << std::endl; }
};
int main()
{
	// 모든 지역 변수(객체)는 자신을 선언한 블럭을 벗어 날때 파괴 됩니다.
	{
		Person p2;
		
		{

			Person p1("kim", 28);
			std::cout << "1st block end" << std::endl;

		}	// <= p1 파괴, 소멸자 호출

		
		std::cout << "2nd block end" << std::endl;

	}	// <= p2 파괴 소멸자 호출

	std::cout << "main 종료" << std::endl;
} 

// 정리
// 생성자(constructor) : 객체를 생성할때 자동으로 호출, 객체를 초기화하기 위해 사용
// 소멸자(destructor)  : 객체가 파괴 될때 자동으로 호출.

// 그런데, 소멸자는 왜?? 필요 한가요 ?
// => 필요 없으면 만들지 마세요
// => 필요 할때만 만들면 됩니다(Vector 예제)
