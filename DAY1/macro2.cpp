// macro2.cpp
#include <cstdio>

#define SQUARE(x)   (x) * (x)

int main()
{
	int a = 3;
	
//	int ret = SQUARE(a+1); // (a + 1) * (a + 1)

	int ret = SQUARE(++a); // (++a) * (++a) => 25

	printf("%d\n", ret); // 결과 예측해 보세요
}
// 결론 : 매크로는 "문자 치환" 방식입니다.
//       버그가 너무 많습니다.
//		 위 SQUARE 는 인자로 "++a"를 사용하면 버그 입니다.
//		 SQUARE 매크로를 아무리 잘만들어도 이 문제를 해결할수 없습니다.

//		단, 매크로 함수도 인라인 치환의 효과를 볼수는 있습니다.

// cl macro2.cpp /EP