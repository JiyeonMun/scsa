// ����1     152 page
#include <iostream>
#include <vector>

// �ٽ� 1. �� ������ Ÿ������ �����ϸ� ���մϴ�.

// �ٽ� 2. ��� ������ ������ ��� Ŭ������ �ִٸ� 
//        ��� ������ �ϳ��� �����̳ʿ� ��� �����Ҽ��ִ�.

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
			for (auto p : v) // ���⼭ p�� Shape* Ÿ���Դϴ�.
				p->draw();	 // error. Shape ���� draw�� �����ϴ�.
		}
	}
}
// �� �����ϱ�� ?
// �ذ�å�� ����� ?
// �ذ�å 1. p�� Rect* �� Circle* �� ĳ�����ؼ� �������.
//				==> �׷���, p�� Rect�� ����ų�� Circle����ų�� �˼� ����.

//      2. Shape ���� draw()�� ������.
//				==> �̷��� �ؾ� �Ѵ�.


