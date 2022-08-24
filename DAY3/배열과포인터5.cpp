#include <iostream>

int main()
{
	int n = 10;
	int *p = &n;

	int x[3] = { 1,2,3 };

	int(*p1)[3] = &x;
	int* p2  = &x[0];

	// p1 과 p2차이
	// 1. 포인터에 1을 더하면 자신이 가리키는 타입만큼 증가
	printf("%p, %p\n", p1, p1 + 1);	// 12byte 증가
	printf("%p, %p\n", p2, p2 + 1); // 4byte  증가

	// 2. *연산시 차이점을 명확히 알아두세요
//	printf("%d\n", *p1);	// 배열* 를 * 하면 배열  
	printf("%d\n", *p1[0]);	// p1이 가리키는 곳에 있는 배열의 0번째 요소

	printf("%d\n", *p2); // int* 를 * 하면 int, 즉, 1
}