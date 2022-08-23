//Vector12, 10번 복사 하세요.
#include <iostream>
//#include "Vector.h"
#include <vector> // C++ 표준 vector

int main()
{
	std::vector<int> v; // 크기 없는 vector(아직 동적할당 안함)

	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1)
			break;

		v.push_back(n);
	}

	// STL 의 대부분의 타입은 모두 새로운 for문 사용가능합니다.
	for (auto e : v)
	{
		std::cout << e << ", ";
	}
}
// 오늘의 핵심 5개 : reference, private, public, 생성자, 소멸자

// 강사님 stl의 vector도 안에 배열 형식으로 데이터를 저장하나요 ?
// => 네.. new int[10] 방식으로 할당, 우리만 만든것과 동일한 구조

// 파이썬에서 리스트와 비슷하다고 생각하면 될까요 ?
// => 네, 완벽히 동일합니다.



