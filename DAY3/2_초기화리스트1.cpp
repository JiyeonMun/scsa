// 6_초기화리스트1    85page ~
#include <iostream>
#include <string>

class Person1
{
	std::string name;
	int age;
public:
	// 사용자 코드						 // 컴파일러가 추가한 코드
	Person1(const std::string& n, int a) // : name() 
	{							// => 컴파일러가 추가한 코드때문에 name 의 디폴트
								//    생성자 호출 되고
		name = n;	// 이 코드에서 "name.operator=(n)" 즉, 대입 연산자라는 함수호출
					// 결국, 2회의 함수 호출로 name에 값을 넣게 됨.
		age = a;
	}
};



class Person2
{
	std::string name;
	int age;
public:
	Person2(const std::string& n, int a) : name(n), age(a)
	{							//=> name 만들때 인자 한개인 생성자 호출해달라는것
		// name = n;
		// age = a;
		
		// 그런데, 초기화시 제어문등이 필요하면 여기서 하게 됩니다.
	}
	// 저런 방식으로 쓰더라도 {}는 써줘야 하는 건가요?
	// => 네.. 당연히 생성자도 함수 이므로  {} 는 필요 합니다.
};

int main()
{
	Person1 p1("kim", 20);	// 1. sizeof(Person1) 크기의 메모리할당
							// 2. Person1 의 생성자 호출

	Person2 p2("kim", 20);
}




