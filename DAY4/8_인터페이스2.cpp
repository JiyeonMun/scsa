#include <iostream>

// ���� ����( loosely coupling )
// => �ϳ��� Ŭ������ �ٸ� Ŭ���� ���� "��Ģ"�� ���� �߻�Ŭ����
//    �� ���ؼ� ����ϴ� ��
// => �������ְ�, Ȯ�强 �ִ� �������� �ٽ� ����..


// ��� ����
// �������̽� : ���Ѿ� �ϴ� ��Ģ�� �ִ°� ( ���� �����Լ��� �ִٴ� �ǹ�)
// �߻�Ŭ���� : ��Ģ + �Ϲ� �����.. 


// java, C# ��� "abstract, interface" ��� Ű���尡 ���� ���� �մϴ�.

// C++ : interface Ű���� ����, ���� ������ �����ϴ�.
//       "�߻� Ŭ����" �������� �������̽��� ���� �մϴ�.



// ī�޶�� ������ ������ ����
// ī�޶� �����ڿ� ī�޶� ����� ���̿� ���Ѿ� �ϴ� ��Ģ�� ���� �����մϴ�.

// ��Ģ : "��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�." ��� ǥ������ ����

//       "��� ī�޶�� �Ʒ� �������̽��� �����ؾ� �Ѵ�" ��� ǥ���ϼ���..

class ICamera
{
public:
	virtual void take() = 0;
};




// ��¥ ī�޶� ���, ����ϴ� �ڵ�� ����� �ֽ��ϴ�.
// ��Ģ��θ� ����ϸ� �˴ϴ�.
class Person
{
public:
	// Ư�� ��ǰ�� �ƴ� "��Ģ"�� ������ ����ؾ� �մϴ�.
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

