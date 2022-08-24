#include <iostream>

// 클래스를 만드는 방법
// 1. 클래스 선언에 함수 구현까지 포함하는 방법
// 2. 클래스 선언에는 멤버 함수는 선언만 넣고, 멤버 함수의 구현은 클래스 외부(.cpp) 에서 작성 하는 방법

#include "Vector.h"

int main()
{
	Vector v(4);

	v.at(0) = 20;

	v.resize(8);

	std::cout << v.at(0) << std::endl; // 20

}

