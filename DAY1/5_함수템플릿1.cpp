#include <iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << Add<int>(1, 2 ) << std::endl; // 정확한 표기법

	std::cout << Add(1, 2) << std::endl; // 타입을 생략한 경우
										 // 인자를 보고 타입결정.

	std::cout << Add(1.1, 2.2) << std::endl; // T=double로 결정
											 // ok.
//	std::cout << Add(1, 2.2) << std::endl; // error
										// 함수 인자를 보고 타입결정안됨

	std::cout << Add<double>(1, 2.2) << std::endl; // ok
										// 인자로 결정하지 말고
										// 무조건 double로 해달라.
}

