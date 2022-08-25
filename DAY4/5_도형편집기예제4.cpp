// 예제1     152 page
#include <iostream>
#include <vector>

// 핵심 1. 각 도형을 타입으로 설계하면 편리합니다.

// 핵심 2. 모든 도형의 공통의 기반 클래스가 있다면 
//        모든 도형을 하나의 컨테이너에 묶어서 보관할수있다.

// 핵심 3. 모든 도형의 공통의 특징이 있다면
//        반드시 그 특징은 기반 클래스에도 있어야 합니다.
//        문법적인 규칙이 아닌, "디자인 측면" 에서

class Shape
{
public:
	void draw() { std::cout << "draw Shape" << std::endl; }
};

class Rect : public Shape
{
public:
	void draw() { std::cout << "draw Rect" << std::endl; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "draw Circle" << std::endl; }
};

int main()
{
	std::vector<Shape*> v;

	int cmd;
	while (1)
	{
		std::cin >> cmd;

		if (cmd == 1)
		{
			v.push_back(new Rect);
		}

		else if (cmd == 2)
		{
			v.push_back(new Circle);
		}

		else if (cmd == 9)
		{
			for (auto p : v) 
				p->draw();	 
		}
	}
}

