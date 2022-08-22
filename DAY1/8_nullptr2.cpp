#include <iostream>

void foo(void* p) { std::cout << "void*" << std::endl;}	// 1
void foo(int n)   { std::cout << "int" << std::endl; }	// 2

void goo(char* p) { std::cout << "goo" << std::endl; }

int main()
{
	foo(0); // 2번, 0은 정수(int)형 리터럴 이므로

	foo((void*)0); // 1번 호출, 0을 void* 타입 처럼 생각해 달라는것

	// 그래서 C언어 시절에 "(void*)0" 의 의미가 꽤 중요 했습니다.
	// => 그래서, NULL 을 만들었습니다.
#ifdef __cplusplus		// 현재 컴파일러가 C++이라면
	#define NULL	0
#else 
	#define NULL (void*)0
#endif


	foo(NULL); // ok. 1

	// 그런데, 아래 코드를 생각해 보세요
	goo(NULL);	// void* => char* 로 암시적 형변환이 필요.
				// C언어는 암시적 변환 됩니다.
				// C++ 언어는 안됩니다. 
				// error. 

}
