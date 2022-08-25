// 5_상속1.cpp   132page ~
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int    age;
};

// 상속(inheritance) : 기본 타입을 확장해서 새로운 타입을 설계하는 문법

// C++    : class Student : public Person
// C#     : class Student : Person
// Python : class Student(Person)
// Java   : class Student extends Person

// Person : Base(기반) class,   Super class,   Parent class
// Student: Derived(파생)class, Sub class,     Child  class

// UML : 클래스의 구조를 그림으로 표기하는 방법을 배우는 분야

class Student : public Person
{	
	int    id;
};

class Professor : public Person
{
	int    major;
};

int main()
{
	Student s;
	Professor p;
}



// 클래스로 만들면 기본이 private인데도 접근이 가능한가요?
// => 다음예제 입니다.
