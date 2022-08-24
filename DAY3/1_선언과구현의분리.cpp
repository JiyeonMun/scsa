#include <iostream>

// 클래스를 만드는 방법
// 1. 클래스 선언에 함수 구현까지 포함하는 방법
// 2. 클래스 선언에는 멤버 함수는 선언만 넣고, 멤버 함수의 구현은 클래스 외부(.cpp) 에서 작성 하는 방법

// 단, java, C#, swift, python 등의 요즘 언어들은 대부분
// class 안에 멤버 함수의 구현을 모두 포함합니다.

// C++만, .h/.cpp 로 분리해서 작업하게 됩니다.

// C++도 C++20/23 이후에는 한개의 파일로만 작업하는 새로운 문법이 
// 도입되었습니다("module" 이라는 새로운 문법)

// #include <vector> // C++23 이전
// import std.core;  // C++23 이후


#include "Vector.h"

int main()
{
	Vector v(4);

	v.at(0) = 20;

	v.resize(8);

	std::cout << v.at(0) << std::endl; // 20

}

