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
	int cmd;

	while (1)
	{
		std::cin >> cmd;
		if (cmd == 1)
		{
			// 사각형 생성
		}
		else if (cmd == 2)
		{
			// 원 생성
		}
		else if (cmd == 9)
		{
			// 모든 도형 그리기. 
		}
	}
}



