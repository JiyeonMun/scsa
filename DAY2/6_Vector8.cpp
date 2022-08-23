#include <iostream>

class Vector
{
private:
	int* ptr;
	int  sz;

public:
	Vector(int size)
	{
		sz = size;
		ptr = new int[sz];
	}
	~Vector()
	{
		delete[] ptr;
	}

	int& at(int index)
	{
		return ptr[index];
	}

	void resize(int newsize)
	{
		if (newsize > sz)
		{
			int* tmp = new int[newsize];

			memcpy(tmp, ptr, sizeof(int) * sz);

			delete[] ptr;

			ptr = tmp;

			sz = newsize;
		}
		else
		{

		}
	}
	// ���� Vector �� "at()", "resize()" �� 2���� ��� �Լ��� �����մϴ�.
	// ���� ����ڵ��� ���� ����Ҽ� �ֵ��� "���� ��� �Լ��� �߰�"�ϼ���

	int size() { return sz; }

	bool contain(int value)
	{
		for (int i = 0; i < sz; i++)
		{
			if (ptr[i] == value)
				return true;
		}

		return false;
	}
};

int main()
{
	Vector v(4);

	v.at(0) = 20;
	v.resize(8);
	std::cout << v.at(0) << std::endl; 

	std::cout << v.size() << std::endl;
	std::cout << v.contain(20) << std::endl; // 20 �� �ִ°� ?
											// true ��, 1
}
