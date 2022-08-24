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
		Date temp(year, month, day + ds); // �߸��� ����
		// ������,, �� �κ� ������ ������
		// 1. days �迭 ���
		// 2. year �� ����ؼ� ������ ��� �ؾ��մϴ�.
		// => Ư�� �⵵�� �������� �����ϴ� ����� ���̹� �˻��� ������.
		return temp;
	}
};

int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };



int main()
{
	Date d1(2022, 8, 24); 

	// ���� "Date" Ÿ�� ����ڰ� ���ϰ� ����ϵ���
	// �پ��� "����" ��� �Լ��� ������ �ּ���.

	Date d2 = d1.afterDays(1000); // 1000�� ���� ��¥�� �˰� �ʹ�.
}

