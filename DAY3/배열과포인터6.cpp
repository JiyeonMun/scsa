#include <iostream>

int main()
{
	int x[3] = { 1,2,3 };

	int(*p1)[3] = &x;

	int* p2 = &x[0];

	// 핵심 : 배열의 이름만 적으면
	//		"배열의 1번째 요소의 주소"로 암시적 형변환 됩니다.
	int* p3 = x; // 즉, &x[0] 의 의미 입니다.

}