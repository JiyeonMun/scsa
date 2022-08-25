﻿#include <iostream>

// C 스타일 캐스팅의 문제점 
int main()
{
	int n = 10;

	const int c = n;	// 실행시간 상수
						// 1. 컴파일 시간에는 c의 값을 알수는없다.
						// 2. 단지, c를 변경하려고 하면 에러 발생
						// 3. 프로그램에서 c를 사용시 항상 메모리에서 읽게된다.

//	const int c = 10;	// 컴파일 시간 상수
						// 1. 컴파일러가 c가 10이라고 알고 있다.
						// 2. 대부분의 컴파일러는 c 사용시 컴파일 시간에
						//		10으로치환
						// => 단, 컴파일러마다 다를수 있다.(표준은 아님)
					


//	c = 20;				// error. 상수는 값을 변경할수 없다.
						// 개발자는 앞으로 코드에서 c를 보면 "10"으로 생각
						// 할것 입니다.

//	int* p = &c;	// A.. error. 상수 주소는 상수가 아닌것을 가리키는포인터
					//			  에 담을수 없습니다.

	
	int* p = (int*)&c; // ok.. C 캐스팅은 너무 강력한 도구 입니다.
						// => 그래서, 위험 합니다

	*p = 20; // A 가 된다면 이 코드는 된다는 의미 입니다.

								  // c=10으로 초기화   c = n으로 초기화
	std::cout << c  << std::endl; // 10					20
	std::cout << *p << std::endl; // 20					20
}

