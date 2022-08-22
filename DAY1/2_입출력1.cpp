#include <cstdio>
#include <iostream> 

int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style

	// C++ style
	// 1. << 를 연속적으로 사용가능합니다.
	// 2. 변수값 출력시 "%d" 등이 필요 없습니다.
	// 3. std::endl 은 "\n" 의 의미.  "\n" 사용해도 됩니다.

	// printf    : 함수 입니다.
	// std::cout : 객체라는 존재 인데, 어렵습니다.(5일차 배웁니다.)
	//				지금은 사용법만 외우세요.
	//             "C"의 "출력(out)" 이라는 의미로 cout 이라는 이름사용
	std::cout << "n = " << n << std::endl;

	// 입력
//	scanf("%d", &n);	// C 스타일
//	scanf_s("%d", &n);	// 요즘에는 보안상 이함수 권장

	std::cin >> n;	// C++ 스타일
					// 1. &n 가 아닌 n 입니다.
					// 2. >> 와 << 헷갈리지 마세요
}
