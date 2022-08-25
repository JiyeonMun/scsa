#include <iostream>

// 약한 결합( loosely coupling )
// => 하나의 클래스가 다른 클래스 사용시 "규칙"을 담은 추상클래스
//    를 통해서 사용하는 것
// => 유연성있고, 확장성 있는 디자인의 핵심 원리..


// 용어 정리
// 인터페이스 : 지켜야 하는 규칙만 있는것 ( 순수 가상함수만 있다는 의미)
// 추상클래스 : 규칙 + 일반 멤버들.. 


// java, C# 등에는 "abstract, interface" 라는 키워드가 각각 존재 합니다.

// C++ : interface 키워드 없고, 관련 문법도 없습니다.
//       "추상 클래스" 문법으로 인터페이스도 설계 합니다.



// 카메라는 무조건 만들지 말고
// 카메라 제작자와 카메라 사용자 사이에 지켜야 하는 규칙을 먼저 설계합니다.

// 규칙 : "모든 카메라는 아래 클래스로 부터 파생 되어야 한다." 라고 표현하지 말고

//       "모든 카메라는 아래 인터페이스를 구현해야 한다" 라고 표현하세요..

class ICamera
{
public:
	virtual void take() = 0;
};




// 진짜 카메라가 없어도, 사용하는 코드는 만들수 있습니다.
// 규칙대로만 사용하면 됩니다.
class Person
{
public:
	// 특정 제품이 아닌 "규칙"만 가지고 사용해야 합니다.
	void useCamera(ICamera* p) { p->take(); }
};

class Camera : public ICamera
{
public:
	void take() override { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() override { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() override { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	Person p;
	Camera c;
	p.useCamera(&c);

	HDCamera hc;
	p.useCamera(&hc); 

	UHDCamera uhc;
	p.useCamera(&uhc);

}

