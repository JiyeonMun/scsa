#include <iostream>



class Date
{
	int year;
	int month;
	int day;

	static int days[12];

public:
	Date()
	{
	}
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	int getMonth() { return month; }

	void setMonth(int m)
	{
		if (m > 0 && m <= 12)
			month = m;
	}
	//=========================
	Date afterDays(int ds)
	{
		Date temp(year, month, day + ds); 

		return temp;
	}

	// �Ʒ� ���� �Լ��� ��¥�� ���õ� �Լ� ����
	// ��ü(Ư����¥)�ʹ� ������ �����ϴ�.
	// ��ü�� ������ ȣ�Ⱑ���ϰ� �ϴ°� ���մϴ�.
	static int howManyDays(int m)
	{
		if (m > 0 && m <= 12)
			return days[m - 1];

		return -1; // �߸��� ���� �����ϴ� ��� -1 ��ȯ�ϱ�� ���
	}

	// "����" �̶�� ������
	// ��ü(Ư����¥) �� �������� �ϰ� �˴ϴ�.
	// static ����Լ��� �ƴ� �Ϲ� ��� �Լ��� �ؾ� �մϴ�.
	Date tomorrow()
	{
//		Date temp(year, month, day + 1); // �߸��� ����. 
								// ������ ����� ���� �غ�����
//		return temp;

		// ��ó�� �ص� �Ǵµ�, �Ʒ� ó���ϴ°� ���մϴ�.
		return afterDays(1);
	}



};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


int main()
{
	Date d1(2022, 8, 24);

	Date d2 = d1.afterDays(1000); 

	// 4���� ���ϱ��� �ִ��� �˰� �ʹ�.
//	int ds = d1.howManyDays(4);		// �̷��� �ص� ������
	int ds = Date::howManyDays(4);	// �̷��� ����ϼ���.

	// ���� ��¥�� �˰�ʹ�.
	Date d3 = d1.tomorrow();
}

