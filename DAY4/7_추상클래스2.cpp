// 도형편집기5 번 복사 해오세요

#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	int getColor() const { return color; }
	void setColor(int c) { color = c; }

	// 가상함수 vs 순수 가상함수

	// 가상함수 : 파생 클래스가 재정의 하지 않으면 기본 구현 제공하겠다는 것

	// 순수 가상함수 : 파생 클래스가 반드시 만들라고 지시하는것



	// 1. 파생클래스 제작자는 반드시 draw()를 구현하라고 지시하는 것
	// 2. 추상화된 개념인 "Shape" 를 "그린다는 것" 은 불가능하다.!!
	virtual void draw() = 0;

	
	// getArea() 의 경우

	// 1. 순수 가상함수로 해도 됩니다.
	//   => 단, 이경우 파생클래스가 반드시 override 해야 합니다.
	//   => 파생 클래스가 할일이 너무 많아 질수도 있습니다.

	// 2. 아래 처럼 기본 구현은 "면적 구할수 없음을 나타내는 -1" 로 하고
	//  => 파생 클래스가 재정의 할수 있도록 하는 것도 나쁘지 않습니다.

	virtual int getArea() { return -1; }
};









class Rect : public Shape
{
public:
	void draw() override { std::cout << "draw Rect" << std::endl; }
};
class Circle : public Shape
{
public:
	void draw()  override { std::cout << "draw Circle" << std::endl; }
};

class Triangle : public Shape
{
public:
	void draw()  override { std::cout << "draw Triangle" << std::endl; }
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

