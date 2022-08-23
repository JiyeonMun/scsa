//Vector10
#include <iostream>
#include "Vector.h"

int main()
{
	Vector<int> v(4);

	int count = 0;
	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1)
			break;

		v.at(count++) = n;

		if (v.size() == count)
			v.resize(v.size() + 4); // 4개씩 키우는 코드
	}

	for (int i = 0; i < count; i++)
	{
		std::cout << v.at(i) << std::endl;
	}
} 

