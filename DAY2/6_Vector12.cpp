//Vector12, 10�� ���� �ϼ���.
#include <iostream>
//#include "Vector.h"
#include <vector> // C++ ǥ�� vector

int main()
{
	std::vector<int> v; // ũ�� ���� vector(���� �����Ҵ� ����)

	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1)
			break;

		v.push_back(n);
	}

	// STL �� ��κ��� Ÿ���� ��� ���ο� for�� ��밡���մϴ�.
	for (auto e : v)
	{
		std::cout << e << ", ";
	}
}
// ������ �ٽ� 5�� : reference, private, public, ������, �Ҹ���

// ����� stl�� vector�� �ȿ� �迭 �������� �����͸� �����ϳ��� ?
// => ��.. new int[10] ������� �Ҵ�, �츮�� ����Ͱ� ������ ����

// ���̽㿡�� ����Ʈ�� ����ϴٰ� �����ϸ� �ɱ�� ?
// => ��, �Ϻ��� �����մϴ�.



