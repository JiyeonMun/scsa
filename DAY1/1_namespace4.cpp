// 10 page 내용입니다.

//#include <stdio.h> // C 언어용 헤더		=> printf가 전역공간에만존재
#include <cstdio>    // C++ 언어 용 헤더	=> printf가 전역공간에도 있고
										  //	   std:: 안에 도 존재

// C++은 C 언어 에서 사용하던 모든 헤더 파일을 다시 만들었습니다.
// => 물론, C 언어 헤더를 사용해도 되긴합니다.

// C언어헤더				C++을 다시 만든 헤더
// <xxx.h>		=>		<cxxx>
// <stdio.h>	=>		<cstdio>
// <string.h>	=>		<cstring>
// <stdlib.h>	=>		<cstdlib>
// <math.h>		=>		<cmath>

int main()
{
	// printf 는 "C 표준" 이지만
	//           "C++ 표준" 이기도 합니다.
	//			 => 모든 C++ 표준은 "std::"에 있습니다.
	printf("hello\n"); // ok
	std::printf("hello\n"); // ??
}
// 1. 헤더는 <stdio.h> 대신 <cstdio> 사용합니다.
// 2. printf 는 "std::printf" 가 아닌 "printf" 사용
// 3. C++ 에서 추가된것만 "std::" 사용하겠습니다.