class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요 - 시험문제 입니다.
	// 1. static 멤버 데이타는 객체가 없어도 메모리에 있습니다
	// 2. static 멤버 함수는 객체없이 호출가능합니다.
	
	void foo()	
	{
		color = 0;	// 1. ok.. foo() 를 호출했다는 것은
					//		   객체를 생성했다는의미 이므로
					//			color은 메모리에 있는 상태 입니다.

		cnt = 0;	// 2. ok

		goo();		// 3. ok
	}
	static void goo()	
	{
		color = 0;	// 4. error. 
					// => goo 는 객체없이 호출가능한데.
					// => color 는 객체를 생성해야만 메모리에 놓이게 됩니다
		
		cnt = 0;	// 5. ok

		foo();		// 6. error
	}
	// 핵심 : static 멤버 함수 에서는 "static 멤버(함수, 데이타)" 만 접근
	//       가능합니다.
};
int Car::cnt;

int main()
{
	Car::goo(); // 객체가 없어도 goo는 호출가능

	Car c;
	c.goo();
}
