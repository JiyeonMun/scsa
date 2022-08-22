#include <iostream>
#include <cstdlib>

int main()
{
	// C 스타일
	int* p1 = (int*)malloc(sizeof(int) * 10);
	free(p1);


	// C++ 스타일
	int* p2 = new int;
	delete p2;


	int* p3 = new int[10];
	delete[] p3; // 주의 delete 가 아닌 delete[]
}
// 52 page
//				malloc						new
// 정체			함수							키워드(연산자)
// 인자			메모리 크기					타입
// 반환타입		void*						인자로 전달한 타입*
//				대부분 원하는타입으로 캐스팅		캐스팅이 필요 없다.
//				해서 사용
// 메모리해지		free						delete, delete[]

// 결정적 차이	생성자 호출 안됨				생성자 호출됨.   <= 내일 배우는 내용

// 핵심 1. 왜?? 동적메모리를 할당하는가 ?
//     2. new, delete 사용법. 