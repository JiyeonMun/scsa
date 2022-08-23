// 인자로 받은 값은 변경하지 않는 함수를 만들려고 합니다.
// 다음중 좋은 것은 ?
void f1(int n)        { int v = n; } // 읽기만
void f2(const int& r) { int v = r; } // 읽기만

int main()
{
	int value = 10;
	f1(value);
	f2(value);
}

// C++ 에서 함수 인자를 받는 규칙 => 중요합니다.

// 1. 인자의 값을 변경하는 경우 - "in/out parameter 라고 합니다."
// => 포인터도 좋고, 
// => reference 도 좋습니다.   
void inc1(int* p) { ++(*p); }
void inc2(int& r) { ++r; }

// 2. 인자의 값을 변경하지 않는 경우 - "in parameter"라고 합니다.
// primitive type 의 경우 ( 언어 자체가 지원 하는 타입)
// => call by value 로 하세요

// user define type( 구조체로 만든 타입 )
// => 일반적으로 크기가 큰 경우가 많습니다.
// => 복사본의 오버헤드를 막아야 합니다.
// => const reference 로 하세요

void f1(int n) {}
void f2(const Rect& n) {}
