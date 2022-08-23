// 1_레퍼런스2
#include <iostream>
// 43 page

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }
int main()
{
	int a = 1, b = 1, c = 1;

	inc1( a );	// call by value. 
				// => 복사본 변수 생성
				// => a 자체는 변경되지 않음

	inc2( &b ); // 값이 아닌 변수의 메모리 주소 전달
				// => call by pointer(address)
				// => inc2 함수가 b의 주소를 알게 되므로
				//    b의 값 변경 가능

	inc3( c );	// call by reference 
				// => inc3 에서 c를 접근할수 있는
				//    별명을 부여한것
				// => inc3이 c 의 값 변경 가능


	std::cout << a << std::endl; // 1
	std::cout << b << std::endl; // 2
	std::cout << c << std::endl; // 2
}

// pointer 와 reference 결국

// "기존 변수를 가리킨다" 는 점에서 유사 합니다.
// "함수 인자로 받을때 모두 원본 수정이 가능합니다."

// 그런데, pointer 보다 reference 가
// 1. 코드가 좀더 쉽게 작성할수 있고
// 2. 안전 합니다.
// int* p; // 쓰레기 값을 가지는 포인터는 존재할수 있지만
// int& r; // 초기화 되지 않은 레퍼런스는 존재할수 없습니다.

// 그래서, reference 가 좋은데,
// 그래도, pointer가 반드시 필요한 경우도 많이 있습니다
// int* * : 이중 포인터는 있지만
// int& & : 이중 reference 는 안됩니다.