#include <iostream>

// 객체지향 : 필요한 타입을 먼저 설계 하자.!!

// "Rect", "Person" 같은 것만 타입으로 만드는 것은 아닙니다.

// "동적 배열" 이라는 타입을 만들어 봅시다.

class Vector
{
};

int main()
{
	// 목표 : 아래 처럼 동작하는 클래스(타입)을 만들어 봅시다.

	Vector v(4); // 크기가 4인 동적 배열

	v.at(0) = 10; // v[0] = 10 의 의미.

	v.resize(8); // 크기를 8으로!

	std::cout << v.at(0) << std::endl; // 10 나와야 합니다.
}
