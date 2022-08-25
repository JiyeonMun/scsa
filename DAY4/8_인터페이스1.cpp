// 4_�������̽� - 171 page
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
// OCP : ���ο� ���� �߰��Ǿ ���� �ڵ�� �������� �ʵ���
//      Ŭ������ ������ ��.

// ���� ����(tightly coupling)
// �ϳ��� Ŭ������ �ٸ� Ŭ���� ���� Ŭ���� �̸��� ���� ����ϴ°�.
// �����ǰ�, Ȯ�强 ���� ����!
