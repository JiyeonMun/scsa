#include <iostream>
#include <string>

// struct vs class
// => C++ 에서는 "단 한가지"의 차이점만 있습니다.

// struct : 접근지정자 생략시 "public"  이 디폴트
// class  : 접근지정자 생략시 "private" 이 디폴트


// 단, C#, java, swift 등의 다른 객체지향 언어는
// => struct 와 class 의 차이점이 아주 많습니다 - 각 언어 참고

// 참고
// => 거의 모든 객체지향 언어는 "접근지정자(private, public)"을 제공합니다.
// => 단, "파이썬(Python)" 에 이 문법이 없습니다.


//struct Person
class Person
{
//private:
	std::string name;
	int  age;

public:
	void setAge(int a)
	{
		if (age > 0 && age < 150)
			age = a;
	}
};

int main()
{
	Person p;

	p.setAge(-10);
}

