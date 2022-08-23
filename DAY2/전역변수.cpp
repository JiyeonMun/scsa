// 전역변수
// 그냥 전역변수를 선언해서 사용하는건 좋지 않은 방법인가요 ?
#include <iostream>

int a;
int b;

int add()
{
	return a + b;
}

int main()
{
	std::cin >> a;
	std::cin >> b;

	int ret = add();

	std::cout << ret << std::endl;
}