// "상수 멤버 함수" 라는 문법은 선택이 아닌 필수 문법 입니다.

// 객체의 상태를 변경하지 않은 모든 멤버 함수, getter(get 으로 시작하는 함수)
// 는 반드시 상수 멤버 함수가 되어야 합니다.

// C++에서 함수 인자로 "const &" 를 만이 사용하는데.
// const Rect& r 에서 r로 호출가능하려면 반드시 상수 멤버 함수가 되어야 합니다.




class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x(a), y(b), w(c), h(d) {}

	int getArea() const { return w * h; }
};

//void foo(Rect r) // call by value : 에러는 아니지만 복사본 생성되므로
	   			   //				    오버 헤드가 있습니다.

//void foo(Rect& r)  // call by reference : 복사본 없음
				   // 그런데, const 없으므로 원본이 변경될 위험이 있다

void foo(const Rect& r) // C++에서 최선의 코드..
{

	int n = r.getArea();
}


int main()
{
	Rect r(1, 1, 10, 10);	// 상수 객체 아님
		
	int n = r.getArea();	// ok. 
	
	foo(r);
}



