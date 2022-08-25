#include <iostream>

// C++ 캐스팅 : 용도에 따라 4개의 캐스팅 제공
//			   => 용도에 맞는 캐스팅을 사용해라.

// 1. static_cast : 반드시 필요하고, 논리적으로 맞는 동작만 허용 
//       1) void* => 다른 타입*
//       2) 상속관계 타입만 허용


int main()
{
	// void* => int* 로 변경하는 작업은 프로그램에서 반드시 필요한 작업이다.
	int* p = static_cast<int*>( malloc(sizeof(int) * 10) );

	free(p);

	// 그외의 다른 타입의 주소 캐스팅은 모두 허용안함(단, 상속관계는 허용)
	int n = 0;

	char*   p1 = static_cast<char*>(&n);	// error
	double* p2 = static_cast<double*>(&n);	// error.


}