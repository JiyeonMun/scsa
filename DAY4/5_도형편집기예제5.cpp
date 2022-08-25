// ����1     152 page
#include <iostream>
#include <vector>

// �ٽ� 1. �� ������ Ÿ������ �����ϸ� ���մϴ�.

// �ٽ� 2. ��� ������ ������ ��� Ŭ������ �ִٸ� 
//        ��� ������ �ϳ��� �����̳ʿ� ��� �����Ҽ��ִ�.

// �ٽ� 3. ��� ������ ������ Ư¡�� �ִٸ�
//        �ݵ�� �� Ư¡�� ��� Ŭ�������� �־�� �մϴ�.
//        �������� ��Ģ�� �ƴ�, "������ ����" ����

// �ٽ� 4. ��� Ŭ���� ���� �Լ� �߿��� �Ļ� Ŭ������ ������ �ϰ� �Ǵ°��� �ִٸ�
//        �ݵ�� �����Լ��� �ؾ� �մϴ�.

class Shape
{
	int color; // ��� ������ ������ Ư¡
public:
	// � �Լ��� virtual �� �ؾ������� �� �Ǵ��ؾ� �մϴ�.
	// 1. �Ʒ� 2���� �Ļ� Ŭ������ ������ �� �ʿ� �����ϴ�.
	// => non-virtual!!
	int getColor() const { return color; }
	void setColor(int c) { color = c; }

	// 2. ��� ������ ������ ���ϴ� ����� �ٸ��ϴ�.
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
				p->draw();	// �� ������ ������ ���ô�.
					// "������ ǥ����(�ڵ�)�� ��Ȳ(��ü�� ����)�� ����
					//  �ٸ� �۾��� �մϴ�."
					// => ������(Polymorphism) �̶�� �մϴ�.

			// ��ü���� ����� 3���� Ư¡ : ĸ��ȭ, ���, ������

			// �̷��� ���ο� ���� "Triangle" �� �߰��Ǿ
			// "p->draw()" �ڵ�� ������ �ʿ� �����ϴ�.

			// ���ο� ����� �߰��Ǿ, ���� �ڵ�� ������ �ʿ� ����!!
			// => ���� ���� Ư¡.
			// => OCP ( Open Close Principle )
			// ��� Ȯ�忡 �����ְ�   (Open, ���߿� ���ο� ����� �߰��Ǿ)
			// �ڵ� �������� �����ֵ���(Close)
			// �ڵ带 �ۼ��϶�� ��Ģ  (Principle)
		}
	}
}

