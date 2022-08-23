#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{
	// 구조체 안에 함수가 있어도, 메모리 구조를 C 언어 와 다르지 않습니다.
	// => 메모리 구조 알아 두세요
	// 1. Rect 타입 변수를 여러개 만들어도, 
	//    멤버 함수는 "코드메모리에 한개만(draw한개, getArea 한개)" 있습니다.

	// 2. 아래 처럼 r1, r2 변수 생성시, 멤버 데이타만 따로 놓에 됩니다.
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16 byte( int 멤버 4개)

	// 3. 멤버 함수를 호출하면
	// => A, B 는 결국 같은 함수를 호출하지만, 함수안에서 사용하는 데이타가 r1, r2로 다릅니다.
	int n1 = r1.getArea(); // A  => getArea 가 r1의 데이타 사용
	int n2 = r2.getArea(); // B  => getArea 가 r2의 데이타 사용

	// 4. 용어 정리

	int n = 10;		// "변" 하는 "수" 입니다.
	n = 20;			// 이렇게 하면 n 의 값이 변경됩니다.

	Rect r = { 1,1,10,10 }; // r 도 "변수" 라고 부르는게 좋을까요 ?
							// "객체(Object)" 라고 부릅니다.

	// 객체(Object) : "세상에 존재 하는 모든 것들.."을 나타내는 용어
	//					책상, 연필, 책, 의자...

	// 엄격히 말하면, 위의 "n"도 객체 입니다.(메모리에 존재하는 것)

	// 그런데, 관례적으로
	// primitive   타입의 인스턴스 : 변수
	// user define 타입의 인스턴스 : 객체 라고 합니다
	// "인스턴스" : 해당 타입을 메모리에 생성한것

	// 객체 지향 : 함수가 아닌 객체를 중심으로 프로그램을 작성하는 것
	r.draw(); // "객체"의 멤버 함수 사용, 객체가 중심
//	draw(r);  // "함수"에 데이타 전달,    함수가 중심

}
