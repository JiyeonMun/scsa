// 도형편집기5 번 복사 해오세요

#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	int getColor() const { return color; }
	void setColor(int c) { color = c; }

	virtual int getArea() { return 0; }

	virtual void draw() { std::cout << "draw Shape" << std::endl; }
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

