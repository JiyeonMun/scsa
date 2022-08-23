// 26 page
#include <iostream>
#include <cstring>  // C 언어의 "string.h" 의 C++ 버전, 
					// => 문자열 함수(strcpy등) 제공
#include <string>   // C++ 문자열 타입을 위한 헤더.
					// => "std::string"

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

	// 혹시 문자열 길이는 어떻게 구하나요 ? 라이브러리가 따로 있나요 ?
	int n1 = s1.size(); // 멤버 함수라는 개념입니다. 오늘 배우는 주제
}

