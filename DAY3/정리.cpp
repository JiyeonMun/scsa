// 객체지향 언어의 특징
// 1. 프로그램에서 필요한 타입을 먼저 설계하는 것

// 2. "안전하고", "사용하고 쉬운" 타입을 만들기 위한 다양한 문법 제공
// => private, public
// => 생성자, 소멸자
// => 초기화 리스트
// => 정적 멤버 ( static member )
// => 상수 멤버 함수
// => this
// => 상속 등

// 3. 프로그램을 작성할때 필요한 다양한 타입을 C++ 표준에서 제공(class 문법으로 만든것)
//    => std::string, std::vector 등

// char, short, int, long   float, double,  float
// => struct 나 class 라는 문법으로 만든 타입이 아닙니다.
// => C/C++ 이라는 언어 자체가 지원하는 타입
// => 그래서, 헤더파일이 필요 없습니다.
// => "primitive type"

// <string> : std::string 타입이 있습니다.
// 이 타입은 "<string>" 헤더에 아래처럼 만들어져 있는것입니다.
// class string
// {
// };

// malloc은 초기화하지 않으면 쓰레기 값이라고 배웠는데// new는 0으로 초기화되나요 ?
// => 초기화 안됩니다. 역시 쓰레기 값입니다.

// 생성자는 초기화를 해주고 소멸자는 파괴해주기때문에 객체지향적인것이 맞을까요??

// "객체지향적"이다 : 객체를 가지고 프로그램을 작성한다는 의미.
// 생성자 : "초기화를 편하게 하기 위해서" 나온 문법

// 그럼 malloc / new은 쓰레기 값으로 초기화된다고 하셨는데 
// calloc 과 같은 개념은 따로 없는걸까요 ?
// => C++은 C의 모든 것을 포함합니다. calloc 도 C++ 표준입니다.

// 그럼, malloc 이 있는데, new 는 왜 만들었나요 ?
// => 지금 나옵니다. 생성자 호출 문제.. 
