#include <iostream>

class Bike
{
	int gear = 0;
public:
//	void setGear(int n) { gear = n; }

	// friend �Լ� : ��� �Լ��� �ƴ� �Ϲ� �Լ� ����, 
	//				private ���� �����ϰ� �ش޶�� ��.
	friend void fixBike();

	// 1. ��� �Լ��� �ϸ� �Ǵµ�? �� �Ϲ� �Լ��� ���峪�� ?
	// => ����� ����� ���� ��찡 �ֽ��ϴ�.(�ַ� ������ ������ ��������)

	// 2. get/set �� �����ϸ� ���� �ʳ��� ?
	// => get/set �� �����ϴ� ���� "��� ������ ���� ����" �ϰ� �Ѵٴ� ��
	// => friend �� Ư�� �Լ����Ը� ����ϴ°�

};

void fixBike()	// ��� �Լ��� �ƴմϴ�.
{
	Bike b;
	b.gear = 10; // error �ƴ�.
}



int main()
{
	fixBike();
}