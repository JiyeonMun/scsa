// 5_상속2

// C++의 접근지정자는 3개 입니다.
class Base
{
private:   int a; // 자신의 멤버 함수만 접근가능, 파생클래스에서는 접근안됨	

protected: int b; // 자신의 멤버 함수만 접근가능, 파생클래스에서도 접근가능
				  // 하지만, 멤버가 아닌 함수는 접근 안됨

public:    int c; // 어디서나 접근 가능.	
};

class Derived : public Base  
{
public:
	void foo()
	{
		a = 0;	// error. 접근 하려면 Base가 가진 멤버 함수 사용
		b = 0;  // ok. protected
		c = 0;  // ok. public
	}
};
int main()
{
	Base base;
	base.a = 0; // error. private
	base.b = 0; // error. protected
	base.c = 0; // ok. public
}
// 그런데, 요즘은 protected는 되도록 사용하지 말라고 권장합니다.
// => 파생에서 접근해서 변경하면, 항상 코드가 혼란스러워 집니다.


// 파생클래스에서만 가능하다는 것은 
// 파생클래스로 만든 객체에서 가능하다는 의미인가요? 
// => 파생 클래스의 멤버 함수 에서 접근 가능(위 코드의 Derived 안에 있는 foo

// base 객체에서 b에 접근 불가한 이유를 잘 모르겠습니다.
// => Base 객체의 멤버 함수가 아니라..
// => main 함수이므로 접근 안됩니다.