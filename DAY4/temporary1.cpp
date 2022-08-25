// temporary1
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	~Point()  { std::cout << "~Point()" << std::endl; }
};
int main()
{
//	Point pt(1, 2); // named object, 수명 : 자신을 선언한 블럭을 벗어날때 파괴

//	Point (1, 2);   // unnamed object, 
					// 임시객체(temporary) 라고 합니다.
					// 수명 : 자신을 선언한 문장의 끝에서 파괴.


	Point(1, 2), std::cout << "X" << std::endl;

	std::cout << "---------------" << std::endl;
}

// 화면 출력결과 예측해 보세요.