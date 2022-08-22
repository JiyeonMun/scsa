// 1_namespace5.cpp - 1번 복사해 오세요. 주석 지우세요
#include <stdio.h>

// QA : 강사님 namespace는 어떤 메모리에 생성되나요?
//      => namespace 가 메모리를 추가로 사용하는 것이 아니라
//		=> 컴파일러가 컴파일 시간에 함수 이름을 변경하는 원리 입니다.

namespace Audio
{
	// 사용자 코드				// 컴파일러가 함수이름을 변경합니다.
								// 어떻게 바꾸는지는 컴파일러마다 다릅니다.
	void init()					// void Audio_init() 
	{
		printf("Audio init\n"); 
	}
}

namespace Video
{
	void init()				// Video_init()
	{ printf("Video init\n"); }
}
int main()
{
	Video::init();	// call Video_init()
	Audio::init();  // call Audio_init()
}

// godbolt.org 접속하세요.. 위 코드 복사 하세요
// C++로 맞추고, 위 코드 윈쪽에 붙여 넣으세요.
