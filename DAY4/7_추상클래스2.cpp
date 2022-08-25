// ����������5 �� ���� �ؿ�����

#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	int getColor() const { return color; }
	void setColor(int c) { color = c; }

	// �����Լ� vs ���� �����Լ�

	// �����Լ� : �Ļ� Ŭ������ ������ ���� ������ �⺻ ���� �����ϰڴٴ� ��

	// ���� �����Լ� : �Ļ� Ŭ������ �ݵ�� ������ �����ϴ°�



	// 1. �Ļ�Ŭ���� �����ڴ� �ݵ�� draw()�� �����϶�� �����ϴ� ��
	// 2. �߻�ȭ�� ������ "Shape" �� "�׸��ٴ� ��" �� �Ұ����ϴ�.!!
	virtual void draw() = 0;

	
	// getArea() �� ���

	// 1. ���� �����Լ��� �ص� �˴ϴ�.
	//   => ��, �̰�� �Ļ�Ŭ������ �ݵ�� override �ؾ� �մϴ�.
	//   => �Ļ� Ŭ������ ������ �ʹ� ���� ������ �ֽ��ϴ�.

	// 2. �Ʒ� ó�� �⺻ ������ "���� ���Ҽ� ������ ��Ÿ���� -1" �� �ϰ�
	//  => �Ļ� Ŭ������ ������ �Ҽ� �ֵ��� �ϴ� �͵� ������ �ʽ��ϴ�.

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

