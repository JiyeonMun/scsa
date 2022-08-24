// 정적 멤버 5
#include <iostream>

// 프로그램에서 "날짜" 를 다루는 경우가 많다.
// => "Date" 라는 타입을 만들자!!

// 핵심 1. 하나의 클래스는 하나의 책임만 지는 것이 좋다.
//        "단일 책임의 원칙"
//        Date 는 "년월일"만 관리하자, "시분초"는 Time 을 따로 만들자

// 2. "잘못된 값" 이라는 개념이 존재하는 멤버 데이타는 private 으로 보호하자

// 3. 모든 객체를 "유효한 상태"가 되도록 하는 것이 좋다.

class Date
{
	int year;
	int month;
	int day;
public:
	Date()
	{
		// 오늘 날짜를 구하는 코드를 작성후 year, month, day 초기화
	}
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	// setter/getter
	int getMonth() { return month; }

	void setMonth(int m)
	{
		if (m > 0 && m <= 12)
			month = m;
	}
	// year, day 는 숙제로 해보세요..
};

int main()
{
	Date d1; // 오늘 날짜로 초기화
	Date d2(2022, 8, 24); // 날짜 지정
}