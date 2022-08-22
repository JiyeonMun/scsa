// 4_함수4
// C++ 함수의 특징 4. 함수 템플릿  - 33 page
// => 아주 중요 합니다. 꼭 이해해 보세요.. (C++의 핵심중의 핵심)

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// 구현이 동일(유사)한 함수가 여러개 필요하면
// 1. "함수"를 만들지 말고
// 2. "함수를 만드는 틀(템플릿, template)" 을 만들면 편리합니다.

// 아래 코드는 함수를 찍어내는 "틀" 입니다.
// 컴파일러가 아래 틀을 사용해서 함수를 생성합니다.
template<typename T>
T square(T a)
{
	return a * a;
}

int main()
{
//	square<int>(3);
//	square<double>(3.4);// 1. double square(double) 함수를 생성하고
						// 2. 이부분은 "call square(3.4)" 의미의 코드생성

	// 위 코드가 정확한 코드인데,
	// 1. 타입인자를 생략할수 있습니다.
	// 2. 타입인자를 생략하면 함수 인자를 보고 컴파일러가 타입 결정합니다.
	square(3);

	// Code Bloat(코드 폭발)
	// => 템플릿 사용시 컴파일러가 너무나 많은 함수(클래스)를 생성해서
	//    실행파일 크기가 커지는 현상
	// => 메모리가 부족한 환경에서는 주의해야 합니다.
	char  c = 1;
	short s = 1;
	int   n = 1;

	//    square(c);
	//    square(s);
	//    square(n);

	// 타입을 전달하면 함수 인자로
	// 추론하지 않고 전달된 타입사용
	square<int>(c);
	square<int>(s);
	square<int>(n);
}












// 파라미터랑 리턴 타입이 다를 때는 어떻게 하나요 ?
// => 아주 좋은 질문입니다. 어렵습니다. - "5_함수템플릿" 에서 설명

