// 1_레퍼런스3. 45 page
struct Rect
{
	int x, y, w, h;
};

void f1(int n)	// call by value 는 복사 본을 생성 합니다.
{				// 그래서, 함수 안에서 어떠한 코드를 작성하더라도
				// 호출자(main) 에서 보낸 변수 값을 수정할수는 없습니다.
	n = 90;		// => 원본 변수 를 수정하지 않겠다는 약속.
}

//void f2(Rect r)	// call by value : 원본을 수정하지 않겠다는 의미도 포함.
					//		=> 복사본에 대한 오버 헤드가 있습니다.(메모리 사용량증가)
//void f2(Rect& r)	// call by reference : 복사본 없습니다.
					//		=> 그런데, 실수 하면 원본이 변경될수 있습니다.

void draw(const  Rect& r) // call by const reference	
{						//	=> 복사본도 만들지 않고, 원본도 수정하지 않겠다는 약속
//	r.x = 200; // error. 수정할수 없다.

	// 사각형을 그릴때는 좌표를 읽기만 하면 변경할필요는 없습니다
	// 그렇다면, 안전하게 하기 위해 "const &" 받는 것이 좋습니다.
}
int main()
{
	int x = 100;

	// 어떤 함수에서 인자의 값을 절대 수정하면 안된다면
	f1(x);

	Rect rc = { 1, 1, 10, 10 };

	// f2는 rc의 내용(좌표)을 절대 변경하면 안된다
	draw(rc);
}
