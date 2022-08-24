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

	// 아래 같은 함수는 날짜와 관련된 함수 지만
	// 객체(특정날짜)와는 관련이 없습니다.
	// 객체가 없더라도 호출가능하게 하는게 편리합니다.
	static int howManyDays(int m)
	{
		if (m > 0 && m <= 12)
			return days[m - 1];

		return -1; // 잘못된 월을 전달하는 경우 -1 반환하기로 약속
	}

	// "내일" 이라는 개념은
	// 객체(특정날짜) 를 기준으로 하게 됩니다.
	// static 멤버함수가 아닌 일반 멤버 함수로 해야 합니다.
	Date tomorrow()
	{
//		Date temp(year, month, day + 1); // 잘못된 구현. 
								// 과제로 제대로 구현 해보세요
//		return temp;

		// 위처럼 해도 되는데, 아래 처럼하는게 편리합니다.
		return afterDays(1);
	}



};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


int main()
{
	Date d1(2022, 8, 24);

	Date d2 = d1.afterDays(1000); 

	// 4월이 몇일까지 있는지 알고 싶다.
//	int ds = d1.howManyDays(4);		// 이렇게 해도 되지만
	int ds = Date::howManyDays(4);	// 이렇게 사용하세요.

	// 내일 날짜를 알고싶다.
	Date d3 = d1.tomorrow();
}

