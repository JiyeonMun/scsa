#include <iostream>

// C 스타일 캐스팅의 문제점 
int main()
{
	int n = 0x11223344;

	// int* => char* 
//	char* p1 = &n; // error
	char* p2 = (char*)&n; // ok..  의도는 4바이트 메모리를
						 //       1byte 단위로 접근하겠다는것
	printf("%x\n", *p2);

	//----------------------
	// 아래 코드를 생각해 보세요
	double* p3 = (double*)&n;	

	*p3 = 3.4;	// 이 코드는 4byte 크기로 할당된 n 의 메모리에
				// 8 byte 크기로 쓰게 됩니다.
				// "잘못된 메모리 참조" 또는 "다른 변수의 메모리침범"
				// 즉, 아주 위험한 현상입니다.

	// 핵심 : C 스타일의 () 캐스팅은 너무 막강한 힘이 있습니다.(거의 성공)
	//		사용자가 실수인지, 의도인지를 알수 없습니다.
}









