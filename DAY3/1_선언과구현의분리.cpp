#include <iostream>

// Ŭ������ ����� ���
// 1. Ŭ���� ���� �Լ� �������� �����ϴ� ���
// 2. Ŭ���� ���𿡴� ��� �Լ��� ���� �ְ�, ��� �Լ��� ������ Ŭ���� �ܺ�(.cpp) ���� �ۼ� �ϴ� ���

#include "Vector.h"

int main()
{
	Vector v(4);

	v.at(0) = 20;

	v.resize(8);

	std::cout << v.at(0) << std::endl; // 20

}

