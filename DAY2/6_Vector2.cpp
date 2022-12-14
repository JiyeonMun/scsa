#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "학생수는 >> ";
	std::cin >> cnt;

	// 3. 입력된 학생수 만큼 다시 점수를 입력 받아야 합니다.
//	int score[cnt]; // error. 배열의 크기로 변수를 넣을수 없다.

	// 실행시간 결정된 크기 만큼의 메모리(배열)을 할당할수 있는 유일한 방법
	// => 동적 메모리 할당
	// => C : malloc,  C++ : new

//	new int[cnt];	// 이렇게만 하면 int를 10개 할당했지만
					// 할당한 메모리에 접근할 이름도 없고
					// 주소도 받지 않았기 때문에 
					// 해당 메모리에 접근할 방법이 없습니다.

	// 1. int 10 힙에 할당
	// 2. 주소를 담는 "포인터 변수 p는 지역변수" 이므로 스택에 있음.
	int* p = new int[cnt];

	// C 언어에서 포인터는 배열 처럼 사용가능하므로 p를 배열처럼 사용하세요
	p[0] = 10;
	p[1] = 20;

	// 스택 변수 : 규칙에 따라 자동 파괴, 사용자가 원한다고 즉시 지울수 없습니다.

	// 힙 메모리 : 사용자가 원할때 제거할수 있습니다.
	//			 단, 사용자가 제거하지 않으면 프로그램 종료시 까지 메모리에존재
	//			 프로그램 종료시에는 OS가 자동으로 수거합니다.

	// 힙 메모리 제거하기. C는 free, C++ delete
	delete[] p;	// 주의!!. p 변수를 지우는 것이 아닙니다.
				// p가 가리키는 곳을 지우는 것입니다.

	// 지역변수 p 는 규칙에 따라 자동으로 제거
	// => 자신을 선언한 블럭을 벗어날때

} // <<== 이 순간 p 파괴.