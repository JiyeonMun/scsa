// 예제1     152 page
#include <iostream>
#include <vector>

// 핵심 1. 각 도형을 타입으로 설계하면 편리합니다.

class Rect
{
public:
	void draw() { std::cout << "draw Rect" << std::endl; }
};

class Circle
{
public:
	void draw() { std::cout << "draw Circle" << std::endl; }
};

int main()
{
	int cmd;
	Rect* pr;
	while (1)
	{
		std::cin >> cmd;

		if (cmd == 1)
		{
			// 사각형 생성
//			Rect rc;	// 이렇게 하면 {} 벗어날때 바로 파괴됩니다.
						// 명시적으로 지울때 까지 파괴 되지 않게 하려면
						// 힙에 생성(동적 할당해야 합니다.
			
//			malloc(sizeof(Rect)); // 생성자가 호출되지 않습니다.

//			new Rect; // 객체가 생성되었지만, 주소를 받지 않으면 접근할수 없습니다.

//			Rect* p = new Rect;	// {} 안에서 만든 p는 
								// {} 벗어날때 파괴 됩니다.

			pr = new Rect;

		}

		else if (cmd == 2)
		{
			// 원 생성
		}
		else if (cmd == 9)
		{
			// 모든 도형 그리기. 
		}
	}
}



