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
	int x[5];	  // int 배열
	double y[5];  // double 배열

	Vector<int>    v1(5); // int 동적 배열
	Vector<double> v2(5); // double 동적 배열

	// 함수 템플릿은 "타입인자 생략하면 함수 인자로 타입추론"되지만
	// 클래스 템플릿은 반드시 타입인자 보내야 합니다.
// 	square(3); => 3을 보고 square<int>(3) 으로 변경..
}
