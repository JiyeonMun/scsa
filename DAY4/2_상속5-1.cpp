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
// Student 만드세요.(Person 에서 상속, int id 추가, 생성자 만드세요)
class Student : public Person
{
	int id;
public:
	// 사용자 코드				// 컴파일러 변경 코드
//	Student(int n) : id(n) {}	// Student(int n) : Person(), id(n) {}

//	Student(int n) : Person("s", 0), id(n) {}	
							// 이 코드는 컴파일 에러는 없지만,
							// 모든 학생의 이름과 나이가 동일합니다.

	Student(const std::string& s, int a, int n) 
				: Person(s, a), id(n) {}

	// 아래 코드는 name, age 가 private 이라서 안됩니다.
//	Student(const std::string& s, int a, int n)
//		: name(s), age(a), id(n) {}

};

int main()
{
	// Student 객체 생성 하는 코드도 만드세요
	Student s("kim", 20, 99);
}
// 초기화 리스트 작성시, 기반 클래스 생성자 호출과 자신의 멤버 초기화순서는
// 어떻게 하나요 ?
// => 기반 클래스 생성자를 먼저 호출하세요
// => 순서 바꿔도 되는데, 실행은 무조건 기반 클래스 생성자가 먼저 호출

//	: Person(s, a), id(n) {}  <= 정답
//	: id(n), Person(s,a)  {}  <= 이것도 잘 컴파일 됩니다.
//							이렇게 해도 실행은 "Person(s,a)" 먼저실행됩니다.

