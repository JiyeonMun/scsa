// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	
	int age;
};
class Dog : public Animal
{
public:	
	int color;
};
int main()
{
	Dog     dog;

	Dog*    p1 = &dog; // ok

	int*    p2 = &dog; // error. 단, reinterpret_cast로는 가능. 						

	Animal* p3 = &dog; // ok. upcasting 이라고 합니다.

	// 핵심 1. 기반 클래스 포인터에 파생 클래스의 주소를 
	//        담을수 있습니다.
	//		  "upcasting" 되었다고 합니다.

	// 핵심 2. 객체가 Dog 라도, Animal*(기반 클래스 포인터) 를 사용해서
	//		 접근하면, 기반 클래스 멤버만 접근가능합니다.

	p3->age = 10; // ok
	p3->color = 0; // error. Animal 에는 color가 없습니다.


	// 핵심 3. Animal* 로 Dog의 고유 멤버에 접근하려면
	//        포인터를 Dog* 타입으로 캐스팅해야 합니다.

	// static_cast : 상속관계 타입은 캐스팅 허용
	static_cast<Dog*>(p3)->color = 0;

	// 단, 이경우는 p3가 반드시 Dog 를 가리킨다고, 확신할수 있을때만 사용
	// 해야 합니다. 
}




