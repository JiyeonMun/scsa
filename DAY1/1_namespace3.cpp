// 1_namespace3.cpp - 9page 내용

// 핵심 1. 모든 C++ 표준은 "std" 이름 공간안에 있습니다.
#include <algorithm>
//using namespace std;	// "std::" 를 생략하기 위해 이렇게 하는 경우가 
						// 종종 있습니다.
int count = 10;

int main()
{
//	int n1 = min(3, 2); // C++ 표준 함수. algorithm 헤더 필요
	int n2 = std::min(3, 2);

	int n3 = count; // 왜 이코드가 에러 일까요 ??
					// C++ 표준에 "std::count()" 라는 함수가 있습니다.
					// using namespace std; 때문에
					// 전역변수 count 와 C++ 표준 "std::count" 이름충돌
}
