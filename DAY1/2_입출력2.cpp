// 3_입출력2.cpp - 15 page아래 부분
#include <iostream>  // 이 헤더만 있어도 printf 사용가능

int main()
{
	int n = 10;

	printf("%d\n", n); // 10진수  10
	printf("%x\n", n); // 16진수  a

	std::cout << n << std::endl; // 10 진수

	std::cout << std::hex << n << std::endl; //  16진수
	
	std::cout << n << std::endl; // 
	std::cout << n << std::endl; // 
}
