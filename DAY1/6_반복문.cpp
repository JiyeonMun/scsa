// 8_반복문 38 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };


	// 전통적인 for 문
	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;


	// C++11 에서 새롭게 소개된 for 문
	// "ranged-for" 라고 합니다.
	// 배열의 모든 요소를 꺼내서 작업할때 편리합니다.
//	for (int n : x)
	for (auto n : x)
	{
//		std::cout << n << std::endl;
		std::cout << n << ", ";
							// std::endl 이 "\n" 출력입니다.
		// 여기서 x의 요소를 제거하면??
	}
}
// for문 안에서 명령문 중 pop 처럼 배열의 인덱스가 
// 바뀌는 상황이 있다면 파이썬 처럼 인덱스 오류가 나나요?
// => C/C++ 은 배열의 요소를 삭제 할수 없으므로 안전합니다.
// => 그런데, STL 의 list 등을 사용시는 파이썬과 마찬가지입니다.

