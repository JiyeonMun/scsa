#include <iostream>

// 2. reinterpret_cast
//	  서로 다른 타입의 주소 변환
int main()
{
	int n = 0;

	// int* => char* 변환
	char* p1 = static_cast<char*>(&n); // error

	char* p2 = reinterpret_cast<char*>(&n); // ok
					// => 서로 다른 타입의 주소 변환을 위한 캐스팅

	double* p3 = reinterpret_cast<double*>(&n); // ok

	// 단, 위처럼 캐스팅을 했어도.. 절대 *p3 하지는 마세요. 버그입니다
	*p3 = 3.4; // 절대 사용금지!


	// 결국 C++도 int* => double* 를 허용하는것입니다.
	// 그런데,, 
	double* p4 = (double*)&n; // 의도 인지, 실수 있지를 알수 없습니다.
	double* p5 = reinterpret_cast<double*>(&n); 
								// reinterpret_cast 를 사용했다는것 자체가
								// 의도적이라는 것을 알수있습니다.
								// 보통은 "static_cast" 를 사용합니다
}





