// 전역변수
// 그냥 전역변수를 선언해서 사용하는건 좋지 않은 방법인가요 ?
// => 1. 전역변수는 어떤 함수에서도 접근할수 있다. 안전하지 않다.
//       => 요즘에는 CPU 가 여러개라서, 프로그램의 여러함수가 동시에 실행될수있다

// => 2. 함수를 라이브러리화 할수 없게 됩니다.
//       아래 "add()" 함수를 다른 프로젝트에서도 사용하고 싶다고 생각해 보세요.
//       add2() 처럼 만들면, 함수 코드를 보관했다가 다른 프로젝트에서 사용하기
//		 편리해 집니다.
#include <iostream>

int a;
int b;

int add()
{
	return a + b;
}

int add2(int x, int y)
{
	return x + y;
}

int main()
{
	std::cin >> a;
	std::cin >> b;

	int ret = add();

	std::cout << ret << std::endl;
}