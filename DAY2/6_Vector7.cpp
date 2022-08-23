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
		// �׻� �޸� �׸��� �׸��� �����ϼ���
		if (newsize > sz)
		{	
			// Ŀ���� �Ҷ�
			int* tmp = new int[newsize];

			memcpy(tmp, ptr, sizeof(int) * sz );

			delete[] ptr;

			ptr = tmp;

			sz = newsize;
		}
		else
		{
			// �پ�鶧 => ��� �ϸ� ������ ������ ������
			//			���� "�ݿ��ϳ�" ���� �˴ϴ�.

		}
	}
};

int main()
{
	Vector v(4);

	v.at(0) = 20;


	v.resize(8); 


	std::cout << v.at(0) << std::endl; // 20

}
