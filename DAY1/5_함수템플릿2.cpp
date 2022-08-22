#include <iostream>

// 1, 2번째 인자가 서로 다른 타입이 가능하도록 만들어 봅시다.
// 파라미터랑 리턴 타입이 다를 때는 어떻게 하나요 ?
template<typename T1, typename T2>
//? Add(T1 a, T2 b)				 // ? 를 표기하는것이 어려 웠습니다.

//decltype(a + b) Add(T1 a, T2 b)  // 그래서 decltype 을 만들었습니다.
								 // 그런데 이 코드가 왜?? 에러일까요 ?

auto Add(T1 a, T2 b) -> decltype(a + b) // ok.. 이렇게 하려면
{										// 후위 반환 타입을 만든것입니다.
	return a + b;
}

int main()
{
	std::cout << Add<int, double>(1, 3.4) << std::endl; // 타입전달
	std::cout << Add(1, 3.4) << std::endl; // 타입생략도 가능
									// 1, 2번째 인자가 다른 타입이므로
									// 타입 추론 가능.

//	a = 20; // error. 변수를 선언전에 사용
//	int a = 10;
//	a = 20; // ok.. 변수를 선언후 사용
}

