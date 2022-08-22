#include <iostream>

void foo(void* p) { std::cout << "void*" << std::endl; }	// 1
void foo(int n) { std::cout << "int" << std::endl; }	// 2

void goo(char* p) { std::cout << "goo" << std::endl; }

int main()
{
	// 앞으로 "0"은 정수로만 사용합시다.
	// 포인터 0이 필요하면 "nullptr" 사용하세요
	foo(0);
	foo(nullptr);

	goo(nullptr);

	// 가독성도 좋습니다.
	auto ret = 임의의함수();

	if (ret == 0) {}		// ret 가 정수일까요 ? 포인터 일까요 ?
	if (ret == nullptr) {}	// ret 는 포인터라는 것을 알수 있습니다.

}
