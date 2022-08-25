// 예제1     152 page
#include <iostream>
#include <vector>

// 핵심 1. 각 도형을 타입으로 설계하면 편리합니다.

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

			v.push_back(new Rect); // 결국 이코드는 위 2줄과 동일한 의미 입니다.
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



