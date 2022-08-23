// 26 page
#include <iostream>

int main()
{
	// C 언어에서의 문자열 처리
	// => char[], char* 사용
	char s1[] = "abcd";
	char s2[] = "efgh";

//	s1 = s2;	// 의도 : s2 문자열을 s1 에 대입
				// 하지만, 배열의 이름은 대입될수 없다.
				// error
//	strcpy(s1, s2); // 보안상 위험해서, 되도록 사용하지 말라
	strcpy_s(s1, strlen(s1) + 1,  s2); // 이 함수가 보안상 안전하다.

	if (s1 == s2) {}	// 의도 : 2개 문자열을 비교하는 의도. 
						// 하지만 배열의 주소 비교.. 항상 false
	if (strcmp(s1, s2) == 0) {} // 이 코드가 문자열 자체를 비교.
}

