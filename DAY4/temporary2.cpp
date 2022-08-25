// temporary1
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	~Point() { std::cout << "~Point()" << std::endl; }
};
//-----------------------
int x = 10;
int  f1() { return x; } // x 자체의 반환이 아닌 "10" 반환 입니다.
int& f2() { return x; } // x 의 별명 반환


Point pt(1, 2);
//Point f3() { return pt; } // pt 자체의 반환이 아닌 
							// pt 를 복사한 "리턴용도의 임시객체"가 반환됨
							// 
Point& f3() { return pt; } // 임시객체가 아닌 진짜 pt 반환(별명)

int main()
{
	f3();
	std::cout << "--------" << std::endl;
}



