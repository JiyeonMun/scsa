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
Point pt(1, 2);

int f1() { return x; }

Point f3() { return pt; }

int main()
{
	f3();
	std::cout << "--------" << std::endl;
}



