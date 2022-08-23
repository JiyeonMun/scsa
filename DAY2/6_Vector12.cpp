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

