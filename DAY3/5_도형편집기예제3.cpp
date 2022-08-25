// 예제1     152 page
#include <iostream>
#include <vector>

// 핵심 1. 각 도형을 타입으로 설계하면 편리합니다.

// 핵심 2. 모든 도형의 공통의 기반 클래스가 있다면 
//        모든 도형을 하나의 컨테이너에 묶어서 보관할수있다.

class Shape
{

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
			for (auto p : v) // 여기서 p는 Shape* 타입입니다.
				p->draw();	 // error. Shape 에는 draw가 없습니다.
		}
	}
}
// 왜 에러일까요 ?
// 해결책은 뭘까요 ?
// 해결책 1. p를 Rect* 나 Circle* 로 캐스팅해서 사용하자.
//				==> 그런데, p가 Rect를 가리킬지 Circle가리킬지 알수 없다.

//      2. Shape 에도 draw()를 만들자.
//				==> 이렇게 해야 한다.


