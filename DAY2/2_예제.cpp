#include <iostream>
#include <algorithm>

// Swap를 만들어 봅시다.
// 핵심 1. 원본 인자가 변경되어야 합니다. - "in/out parameter"

// 1. C 언어 버전 : call by pointer(address) 사용
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
 
// 2. C++ 버전 : call by reference 사용
// 특징 1. 포인터 대신 reference 사용 => 코드가 쉽고, 간결해 보인다
// 특징 2. inline 함수 사용	 => 호출이 아닌 치환 이므로 빨라진다.
// 특징 3. template 사용		 => int 뿐 아니라 모든 타입에 대해서 Swap 함수 생성
// 특징 4. namespace 사용     => 규모가 큰 프로젝트시 이름 충돌을 막을수 있다.
// 참고) 이미 C++ 표준에 std::swap 이 있습니다.
// => <algorithm> 헤더
namespace utils
{
	template<typename T>
	inline void Swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
	// 모든 유틸리티성 함수들은 이곳에서 만들자.
	// 대형 프로젝트시, 이름 충돌을 대비 하자.
}

int main()
{
	double x = 3.4, y = 2.1;
//	int x = 3, y = 2;
//	Swap(&x, &y);

//	utils::Swap(x, y);

	std::swap(x, y); // C++ 표준 swap 함수(템플릿)
					 // 위에 만든 코드와 유사합니다


	std::cout << x << std::endl;	// 2
	std::cout << y << std::endl;	// 3
}



