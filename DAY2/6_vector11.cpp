// Vector11
#include <iostream>  // <> : C++ 표준이 제공하는 헤더 포함할때
#include "Vector.h"  // "" : 사용자가 만든 헤더 포함할때
#include <vector>	 // C++ 표준에 이미 vector 있습니다.

// vector : 배열과 유사하지만, 크기 변경이 가능하다

int main()
{
//	Vector<int> v(4);
	std::vector<int> v(4);

	v.at(0) = 10;
	v.resize(8);
	std::cout << v.at(0) << std::endl;

	// C++ 표준 vector 소개
	
	std::vector<int> v1 = { 1,2,3,4,5 }; // 이렇게 초기화도 가능

	v1.at(0) = 10;// 이렇게도 되지만

	v1[0] = 10;   // 배열처럼 []도 가능.


	v1.push_back(20); // 끝에 한개 추가.. (파이썬 리스트가 vector입니다.)
										// s.append(20)

	std::cout << v1.size() << std::endl; // 6
}
// 객체지향 언어 : 필요한 타입을 만드는 것..
// => 이미 언어 표준에서, "아주 훌륭한 많은 타입"을 제공(class로 만들어서)
// => std::string, std::vector 
// => STL : Standard Template Library, C++ 표준라이브러리 이름.
