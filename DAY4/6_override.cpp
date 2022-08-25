// 7_가상함수2.cpp  147 page ~

class Shape
{
public:
	virtual void Draw() {};
	virtual void Clone() {};
	virtual void Move() {};
};
class Rect : public Shape
{
public:	   
	// 핵심 1. 가상함수 재정의시 virtual 을 붙여도 되고 안붙여도 됩니다.
	// => 그런데, 붙이는것이 가독성이 좋아서, 대부분 붙입니다.
	virtual void Draw()  {};

	// 핵심 2. 가상함수 재정의시 오타가 발생해도 에러가 아닙니다.
	// => 다른 가상함수를 만들었다고 컴파일러는 생각합니다.
	// => 이현상이 C++에서 아주 많은 버그의 원인이 되었습니다.
	virtual void clone() {};  // error 아님


	// 핵심 3. 그래서, C++11에서 "override" 키워드가 도입되었습니다.
	virtual void move() override {}; // error
};


int main()
{

}
