// 예제1     152 page
#include <iostream>
#include <vector>

// 핵심 1. 각 도형을 타입으로 설계하면 편리합니다.

// 핵심 2. 모든 도형의 공통의 기반 클래스가 있다면 
//        모든 도형을 하나의 컨테이너에 묶어서 보관할수있다.

// 핵심 3. 모든 도형의 공통의 특징이 있다면
//        반드시 그 특징은 기반 클래스에도 있어야 합니다.
//        문법적인 규칙이 아닌, "디자인 측면" 에서

// 핵심 4. 기반 클래스 가진 함수 중에서 파생 클래스가 재정의 하게 되는것이 있다면
//        반드시 가상함수로 해야 합니다.

class Shape
{
	int color; // 모든 도형의 공통의 특징
public:
	// 어떤 함수를 virtual 로 해야할지를 잘 판단해야 합니다.
	// 1. 아래 2개는 파생 클래스가 재정의 할 필요 없습니다.
	// => non-virtual!!
	int getColor() const { return color; }
	void setColor(int c) { color = c; }

	// 2. 모든 도형은 면적을 구하는 방법이 다릅니다.
	// => virtual
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
				p->draw();	// 이 한줄을 생각해 봅시다.
					// "동일한 표현식(코드)이 상황(객체의 종류)에 따라
					//  다른 작업을 합니다."
					// => 다형성(Polymorphism) 이라고 합니다.

			// 객체지향 언어의 3가지 특징 : 캡슐화, 상속, 다형성

			// 미래에 새로운 도형 "Triangle" 이 추가되어도
			// "p->draw()" 코드는 수정될 필요 없습니다.

			// 새로운 기능이 추가되어도, 기존 코드는 수정될 필요 없다!!
			// => 아주 좋은 특징.
			// => OCP ( Open Close Principle )
			// 기능 확장에 열려있고   (Open, 나중에 새로운 기능이 추가되어도)
			// 코드 수정에는 닫혀있도록(Close)
			// 코드를 작성하라는 규칙  (Principle)
		}
	}
}

