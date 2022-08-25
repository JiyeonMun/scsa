// 4_인터페이스 - 171 page
#include <iostream>

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class Person
{
public:
	void useCamera(Camera* p) { p->take(); }
	void useCamera(HDCamera* p) { p->take(); }
};

int main()
{
	Person p;
	Camera c;
	p.useCamera(&c); 

	HDCamera hc;
	p.useCamera(&hc); // ??

}
// OCP : 새로운 것이 추가되어도 기존 코드는 수정되지 않도록
//      클래스를 만들라는 것.

// 강한 결합(tightly coupling)
// 하나의 클래스가 다른 클래스 사용시 클래스 이름을 직접 사용하는것.
// 경직되고, 확장성 없는 설계!
