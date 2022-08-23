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
		// 항상 메모리 그림을 그리고 생각하세요
		if (newsize > sz)
		{	
			// 커져야 할때
			int* tmp = new int[newsize];

			memcpy(tmp, ptr, sizeof(int) * sz );

			delete[] ptr;

			ptr = tmp;

			sz = newsize;
		}
		else
		{
			// 줄어들때 => 어떻게 하면 좋을지 도전해 보세요
			//			답은 "금요일날" 배우게 됩니다.

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
