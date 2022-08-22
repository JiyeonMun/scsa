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

int main()
{
	// namespace 안에 있는 요소에 접근 하는 3가지 방법

	// 1. 완전한 이름 사용
	Video::init();
	Audio::init();

	// 2. using 선언(declaration)
	using Audio::init;  // <= 이 코드가 using 선언 입니다
						// <= 앞으로 Audio::init 은 "Audio" 없이 사용가능
	init();   // Audio::init
	::init(); // global init

	// 3. using 지시어(directive)
	using namespace Audio; // Audio 안의 모든 이름을 Audio 없이 사용 하겠다는것
						   
}	




