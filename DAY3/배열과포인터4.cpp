#include <iostream>

int main()
{
	int n = 0x11223344;

	// 왜 int 변수의 주소를 char* 에 담나요 ??
	// => 메모리를 해석하는 방식을 변경하겠다는 의도 입니다.

	int*  p1 = &n; 
	char* p2 = (char*)&n; 


	printf("%x\n", *p1);// 주소에 가서 "4바이트"를 읽어서 
						// 정수로 해석하겠다는 의도
						// 0x11223344

	printf("%x\n", *p2);// 주소에 가서 "1바이트"만 읽어서
						// 정수로 해석하겠다는것
						// 0x11

	// 아래 코드 해석해 보세요.. 어렵습니다.
	// 좌변만 생각해 보세요.
	char(*p3)[4] = (char(*)[4])&n;

	// p3 를 따라가면 "배열(char[4])" 가 있는 것으로 해석하겠다는 의도 입니다.

	// *p3 : 배열 입니다.
	// (*p3)[0] : 배열의 1번째 요소 입니다., 0x44
	printf("%x\n", *p3[0]); // 0x44


	// int* 를 따라가면 int
	// int(*)[3] 을 따라가면 int[3]

	// 즉, 같은 메모리 주소라도,
	// 포인터 타입에 따라 *p 의 결과는 달라 집니다.
}