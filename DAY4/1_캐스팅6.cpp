#include <iostream>

// 3. const_cast
//	  상수성 제거
int main()
{
	const int c = 0;

	// const int 주소를 int* 에 담기, 즉, 상수성을 제거
	int* p1 = (int*)&c;	// ok

	int* p2 = static_cast<int*>(&c);		// error
	int* p3 = reinterpret_cast<int*>(&c);	// error
										// 상수성 제거는
										// 이 캐스팅으로도 안됨

	int* p4 = const_cast<int*>(&c); // ok..
								// 상수성 제거를 위한 캐스팅

	// 그런데, 위 p4는 "보관하거나, 주소를 비교하는 용도 정도만 사용"
	// 해야 합니다.
	// 절대, 아래처럼은 사용하지 마세요
	*p4 = 20; // 이런 코드는 대부분 버그의 원인	
}

// 결론, C++은 용도별로 4개의 캐스팅을 제공합니다.

// static_cast		: 프로그램작성시 꼭 필요하다는 생각되는것만 허용
//					   => 대부분의 개발자는 이것만 사용하는 것을 권장

// reinterpret_cast	: 서로 다른 타입의 주소 캐스팅

// const_cast		: 상수성 제거하는 캐스팅

// dynamic_cast		: RTTI 를 위한 캐스팅 ( 상속 배울때 이야기)

// >> static_cast 만 사용하세요.. 사용하다가 혹시 에러 나오면 !!
// >> 정말 필요한 캐스팅인지 확인후, 용도에 맞는것 사용.




