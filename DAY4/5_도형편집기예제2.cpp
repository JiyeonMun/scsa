// ����1     152 page
#include <iostream>
#include <vector>

// �ٽ� 1. �� ������ Ÿ������ �����ϸ� ���մϴ�.

class Rect
{
public:
	void draw() { std::cout << "draw Rect" << std::endl; }
};

class Circle
{
public:
	void draw() { std::cout << "draw Circle" << std::endl; }
};

int main()
{
	std::vector<Rect*> v;

	int cmd;
	while (1)
	{
		std::cin >> cmd;

		if (cmd == 1)
		{
//			Rect* p = new Rect;
//			v.push_back(p);

			v.push_back(new Rect); // �ᱹ ���ڵ�� �� 2�ٰ� ������ �ǹ� �Դϴ�.
		}

		else if (cmd == 2)
		{
			v.push_back(new Circle);
		}
		else if (cmd == 9)
		{
		}
	}
}



