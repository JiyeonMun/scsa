// 6_Upcasting1.cpp      140 page ~
#include <vector>

// Upcasting 의 장점
// 1. 동종을 처리하는 함수를 만들수 있습니다 : NewYear(Animal*)
// 2. 동종을 저장하는 컨테이너를 만들수 있습니다 : std::vector<Animal*>

// 컨테이너(Container) : 여러개를 저장할수 있는 타입들.
//						std::vector, 배열등



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
class Cat : public Animal
{
public:	
	int speed;
};

// 모든 동물은 새해가 되면 나이가 한살 증가 합니다.
//void NewYear(Dog* p)   // Dog 만 전달가능한 함수
void NewYear(Animal* p)  // 모든 동물을 전달 가능한 함수.
{
	++(p->age);

	// 이 안에서 color, speed는 접근 못하지 않나요 ??
	// => 이 함수 설계의도는 공통된 요소(Animal멤버)만 접근하기로 한것입니다.

	// p가 반드시 dog를 가리킨다고 확신할 수 없을때는 언제인가요?
	// => 지금 입니다. 
	// => 현재 상태는 p가 Dog인지 ? Cat 인지 ? 다른 동물인지 알수 없습니다.
	// => "static_cast<Dog*>(p)" 절대 안됩니다.
}

int main()
{
	Dog d; NewYear(&d);
	Cat c; NewYear(&c);


	// Upcasting 활용/장점
	std::vector<Dog*> v1; // Dog 객체들의 주소만 보관하는 vector

	std::vector<Animal*> v2; // 동종(동일 기반 클래스를 사용하는 타입)
							// 즉, Animal 로 부터 파생된 타입
							// 의 모든 객체주소를 보관하는 vector

	// 장점 1. 동종을 저장하는 컨테이너를 만들수 있다.
	//	     (물론, 각 동물의 고유 멤버 접근은 안됨.. 해결책은 이어지는 수업)
}


//업캐스팅1번에서// Dog*    p1 = &dog 이 경우// Dog 타입으로는 Animal 멤버, Dog 멤버 모두 가능합니다.// p1->age = 0; 이렇게 하면 안되고  ==> 됩니다.. 이렇게 하세요// static_cast<Animal*>(p1)->age = 0; 이렇게 접근해야 하나요 ?
								// => 이럴 필요 없습니다.
