#include <iostream>

template<typename T>
class Vector
{
private:
	T* ptr;
	int  sz;

public:
	Vector(int size)
	{
		sz = size;
		ptr = new T[sz];
	}
	~Vector()
	{
		delete[] ptr;
	}

	T& at(int index)
	{
		return ptr[index];
	}

	void resize(int newsize)
	{
		if (newsize > sz)
		{
			T* tmp = new T[newsize];

			memcpy(tmp, ptr, sizeof(T) * sz);

			delete[] ptr;

			ptr = tmp;

			sz = newsize;
		}
		else
		{

		}
	}

	int size() { return sz; }

	bool contain(T value)
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
	int x[5];	  // int �迭
	double y[5];  // double �迭

	Vector<int>    v1(5); // int ���� �迭
	Vector<double> v2(5); // double ���� �迭

	// �Լ� ���ø��� "Ÿ������ �����ϸ� �Լ� ���ڷ� Ÿ���߷�"������
	// Ŭ���� ���ø��� �ݵ�� Ÿ������ ������ �մϴ�.
// 	square(3); => 3�� ���� square<int>(3) ���� ����..
}
