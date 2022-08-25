// 3_추상클래스 - 168page

// 추상클래스(abstract class) : 순수 가상함수가 "한개 이상" 있는 클래스
// 특징 : 추상 클래스는 객체를 만들수 없다.
// 의도 : 파생 클래스 제작자에게 특정 이름의 멤버 함수를 반드시 만들라고 지시하는 것!!
//       해당 함수를 만들지 않으면, 사용할수 없다(객체 생성 안됨)

class Shape
{
public:
	virtual void Draw() = 0; // 순수 가상 함수(pure virtual function)
							 // => 함수 구현부가 없고
							 // => "= 0" 으로 표기 합니다.
};
class Rect : public Shape
{
public:
	// Draw() 를 override 해서 구현부를 제공하면 "추상클래스가 아니다"
	// Draw() 구현부를 제공하지 않으면 "추상 클래스"      
	virtual void Draw() override {}
};

int main()
{
//	Shape s; // error. 추상 클래스는 객체를 만들수 없다.
	Rect  r; // ?
}


