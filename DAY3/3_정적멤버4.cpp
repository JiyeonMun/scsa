#include <iostream>


class Car
{
	int color;
	static int cnt;	
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	// non-static ��� �Լ�
	// => �ݵ�� ��ü�� �����߸� ȣ�Ⱑ���մϴ�.
	// => "c1.getCount()" ó��, c1�� �ʿ� �մϴ�.
	//int getCount() { return cnt; } 

	// static ��� �Լ�, ��ü�� ��� ȣ�Ⱑ���մϴ�.
	// "Car::getCount()" �Ǵ� "c1.getCount()" �� ����
	// => ���� : Ŭ�����̸����� ȣ��
	static int getCount() { return cnt; }
};
int Car::cnt = 0; 

int main()
{
	std::cout << Car::getCount() << std::endl; 

	Car c1;
	Car c2;

	std::cout << Car::getCount() << std::endl;
//	std::cout << c1.getCount() << std::endl;// ���������� ���ڵ� ����
}
// ���� Car::cnt ��
// 1. ��� Car ��ü�� ����
// 2. Car ��� �Լ��� ���氡��
// 3. �о� ������ "Car::getCount()" ���


