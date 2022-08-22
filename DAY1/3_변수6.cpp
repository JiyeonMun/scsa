// 3_변수6.cpp   25 page 

struct Point
{
	int x = 0, y = 0;
};
int main()
{
	Point pt = { 1,2 };

	// C/C++ 에서 구조체의 각 요소에서 값을 꺼낼때는 아래 처럼 합니다.
	int x = pt.x;
	int y = pt.y;

	// C++17 부터, 한줄로 모든 요소의 값을 꺼낼수 있습니다.
	auto[a, b] = pt;  // auto a = pt.x;
					  // auto b = pt.y;

//	auto[a, b, c] = pt; // error. 갯수 정확히 일치해야 합니다.
//	int [a, b] = pt;     // error. auto 만 가능합니다.


	// 구조체  뿐 아니라 배열도 됩니다.
	// 배열의 원소가 3개일 때 2개만 꺼내는 것도 가능한가요?
	// => 안됩니다. 갯수 맞춰야 합니다.

	// cout 혹시 배열 전체 출력도 되나요 ?
	// => 안됩니다. 좀 불편하긴 합니다.

	int arr[3] = { 1,2,3 };

	auto[a1, a2, a3] = arr;	// auto a1 = arr[0]
						    // auto a2 = arr[1]
						    // auto a3 = arr[2]

	std::cout << a1 << std::endl;
	std::cout << a2 << std::endl;
	std::cout << a3 << std::endl;

	// 위 문법이 "C++17" 에서 추가된 "structural binding" 이라는 문법입니다
}





// 현재 대부분의 C++ 컴파일러는 "C++14"를 기준으로 컴파일 합니다
// C++17 이상 버전을 사용하려면 컴파일러 옵션이 필요 합니다.(5page)

// g++ : g++ 소스.cpp  -std=c++17 또는 -std=c++20
// VC  : cl 소스.cpp   /std:c++17     /std:c++20     /std:c++latest
//					  
// VC => 프로젝트 => 속성 메뉴 선택후
//    => C/C++, 명령줄 아래 Edit 창에 "/std:c++latest" 넣읏면 됩니다.
