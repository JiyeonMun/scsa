﻿// 2_메모리할당 - 52 page
#include <iostream>

int main()
{
	// 1. 사용자에게 2개의 정수를 입력 받고 싶다.
	//    그런데, 입력값은 나중에 사용하기 위해 꼭 보관해야 한다.
	//   => 2개의 변수가 필요 하다.
	int n1;
	int n2;

	std::cin >> n1;
	std::cin >> n2;


	// 2. 사용자에게 5개의 정수를 입력 받고 싶다.
	//    그런데, 입력값은 나중에 사용하기 위해 꼭 보관해야 한다.

//	int a, b, c, d, e; // 5개의 메모리가 5개의 다른 이름 사용
						  // => 반복문에서 사용할수 없다.

	int x[5]; // 5개의 메모리가 "한개의 이름 + 인덱스" 로 접근
			  // => 반복문에서 사용가능


	// 5번의 입력 코드가 필요하다. 반복문을 사용할수 없을까 ?
	for (int i = 0; i < 5; i++)
	{
		std::cin >> x[i] ;
	}
}





