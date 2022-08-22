#include <iostream>

template<typename T1, typename T2>
auto Add1(T1 a, T2 b) -> decltype(a + b) 
{										
	return a + b;
}
// 후위에 decltype을 안적고 auto만 앞에 적어도 되는건가요?
// => C++14 부터는 후위 반환 타입을 표기하지 않고 auto 만 적어도 됩니다.
// => 하지만 이경우는 return 문장으로 타입이 추론되는데..
//    return 문이 여러개 라면 추론 할수 없습니다.
//    위 코드는 "반환 타입을 명시" 했으므로 return 문이 여러개 라도 문제 없습니다.
template<typename T1, typename T2>
auto Add2(T1 a, T2 b)
{
	return a + b;
//	if (a == 1) return a;
//	return b;
}

int main()
{
	std::cout << Add1(1, 3.4) << std::endl;
	std::cout << Add2(1, 3.4) << std::endl;
}


