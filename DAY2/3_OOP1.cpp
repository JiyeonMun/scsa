// 3_OOP1 - 57page
#include <iostream>

// �簢���� ������ ���ϴ� �Լ�
int getRectArea(int left, int top, int right, int bottom)
{
			// width      *   height
	return (right - left) * (bottom - top);
}

// �簢���� �׸��� �Լ���� ������ ������.
void drawRect(int left, int top, int right, int bottom)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	int n1 = getRectArea(1, 1, 10, 10);

	drawRect(1, 1, 10, 10);
}