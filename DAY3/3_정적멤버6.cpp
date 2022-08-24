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
		Date temp(year, month, day + ds); // 잘못된 구현
		// 과제로,, 이 부분 구현해 보세요
		// 1. days 배열 사용
		// 2. year 를 사용해서 윤년을 고려 해야합니다.
		// => 특정 년도가 윤년이지 조사하는 방법은 네이버 검색해 보세요.
		return temp;
	}
};

int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };



int main()
{
	Date d1(2022, 8, 24); 

	// 이제 "Date" 타입 사용자가 편리하게 사용하도록
	// 다양한 "좋은" 멤버 함수를 제공해 주세요.

	Date d2 = d1.afterDays(1000); // 1000일 뒤의 날짜를 알고 싶다.
}

