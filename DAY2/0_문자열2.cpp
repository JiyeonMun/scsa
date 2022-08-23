// 26 page
#include <iostream>
#include <string>   // C++ 문자열 타입을 위한 헤더.

int main()
{
	// C++ 언어에서의 문자열 처리
	// => std::string 이라는 타입을 사용합니다
	// => 오늘 배우는 "class" 라는 문법으로 만든 타입
	std::string s1 = "abcd";
	std::string s2 = "efgh";

	// 원리는 앞으로 배우게 되고, 지금은 사용법만 알아 두세요
	// int 변수 처럼 생각하고 사용하세요
	s1 = s2; // 대입	- "efgh"

	s1 = s1 + s2; // 덧셈도 가능   "efghefgh"

	if (s1 == s2) {} // 비교 가능. false

	std::cout << s1 << std::endl; // "efghefgh"
}

