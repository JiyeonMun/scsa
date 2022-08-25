#include <iostream>
#include <cstdlib>

int main()
{
	// malloc 의 반환 타입 : void*
	// int* 에 담으려면 "캐스팅"해서 담아야 합니다.

	// C 언어 스타일 캐스팅
	int* p1 = (int*)malloc(sizeof(int) * 10);

	// C++ 언어 스타일 캐스팅 
	int* p2 = static_cast<int*>( malloc(sizeof(int) * 10) );

	// C++ 에서도 "C 스타일 캐스팅"을 계속 사용해도 되긴 합니다.
	// => 그런데, C++ 스타일 캐스팅을 권장합니다.
	free(p1);
	free(p2);


}








// github.com/codenuri/scsa 에서

// DAY4_사전소스.zip 받으시면 됩니다.

// 플랫폼도구집합 버전,
// Windows SDK 버전  설정해 주세요
