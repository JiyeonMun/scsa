#include <stdio.h>

namespace Audio
{
	void init() { printf("Audio init\n"); }
}
namespace Video
{
	void init() { printf("Video init\n"); }
}
// global namespace : 특정 이름 공간에 포함되지 않은 것.
void init() { printf("global init\n"); }

// 핵심 : using 선언이나 using 지시어는 함수 안 또는 밖에 있을수 있습니다.
// 함수 안 : 해당 함수에서만 적용
// 함수 밖 : using선언(지시어) 이후의 모든 함수에 적용
//		   => 이 경우 global 영역과 이름 충돌 발생
using Audio::init;

// 결론 : 되도록 완전한 이름만 사용하세요.

int main()
{
	// namespace 안에 있는 요소에 접근 하는 3가지 방법

	// 1. 완전한 이름 사용
	Video::init();
	Audio::init();

	// 2. using 선언(declaration)
//	using Audio::init;  // <= 이 코드가 using 선언 입니다
						// <= 앞으로 Audio::init 은 "Audio" 없이 사용가능
	init();   // Audio::init
	::init(); // global init

	// 3. using 지시어(directive)
	using namespace Audio; // Audio 안의 모든 이름을 Audio 없이 사용 하겠다는것
						   
}	




