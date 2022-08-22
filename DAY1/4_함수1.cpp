// 6_함수1.cpp  28 page ~
// C++함수의 특징 1. 디폴트 파라미터

// 개념 : 인자를 전달하지 않으면 디폴값을 사용하겠다는 의미.
// 주의 사항 2가지
// 1. 함수를 선언과 구현으로 분리할때 선언에만 표기해야 합니다.
// 2. 마지막 인자 부터 차례대로 지정해야 합니다

void f1(int a = 0, int b    , int c = 0) {} // error
void f2(int a    , int b = 0, int c = 0) {} // ok
void f3(int a = 0, int b = 0, int c    ) {} // error


void foo(int a = 0, int b = 0, int c = 0);

int main()
{
	foo(1, 2, 3);
	foo(1, 2);		// foo(1, 2, 0)
	foo(1);			// foo(1, 0, 0)
	foo();			// foo(0, 0, 0)
}

//void foo(int a , int b, int c)
void foo(int a /*= 0*/, int b /*= 0*/, int c /*= 0*/)
{
}

