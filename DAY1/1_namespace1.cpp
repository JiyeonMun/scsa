// 핵심 1. 파일 확장자 - 교재 5 page
// C   : .c
// C++ : 다양했습니다.( 5 page 참고)
//       지금은 .cpp 로 대부분 사용

// 2_namespace.cpp - 교재 7 page
#include <stdio.h>

// 장점 1. 프로그램의 각 요소를 논리적으로 분리할수 있다.
//     => 그래서 요즘 대부분의 언어가 지원

//     2. 함수 이름등의 충돌을 막을수 있다.

// github.com/tensorflow 에 접속해 보세요
			// tensorflow/core/

// github.com/aosp-mirror 
// => platfrom_system_core / libuitls / include/utils/refbase.h

namespace Audio
{
	void init() { printf("Audio init\n"); }
}

namespace Video
{
	void init() { printf("Video init\n"); }

	// Video 모듈 관련 모든 함수, 구조체, 전역변수등을
	// 모두 이 안에서 만듭니다.
}
int main()
{
	Video::init();
	Audio::init();
}
