// 3_입출력2.cpp - 15 page아래 부분
#include <iostream>  // 이 헤더만 있어도 printf 사용가능
#include <iomanip>	// std::setw()

// 입출력을 조정할때 사용하는 것을
// io maniplulator 라고 합니다.
// 대부분 <iomanip> 헤더에 있습니다.

int main()
{
	int n = 10;

	printf("%d\n", n); // 10진수  10
	printf("%x\n", n); // 16진수  a

	std::cout << n << std::endl; // 10 진수

	std::cout << std::hex << n << std::endl; // 16진수
	
	std::cout << std::dec << n << std::endl; // 10진수

	std::cout << std::setw(10) << n << std::endl; // 10자리에 맞춰달라
}
