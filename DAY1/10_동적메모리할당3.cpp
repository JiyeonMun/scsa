#include <iostream>
#include <cstdlib>

int main()
{
	int score1[10];		// 배열, stack 메모리에서 할당
	
	score1[0] = 100;	// 이름이 있으므로 이름을 사용해서 접근 가능



	int* score2 = (int*)malloc(sizeof(int) * 10); // 동적할당, 힙 메모리
							  // 메모리에 부여된 이름이 없다.
							  // 이름이 없으므로, malloc 이 반환한 
							  // 주소를 통해서만 접근 가능

	// 포인터는 배열과 유사하게 사용가능하므로 score2도 score1과
	// 유사하게 사용가능
	score1[0] = 100; // 배열
	score2[0] = 100; // 동적할당한 메모리 사용

	// 지역변수 : 수명이 정해져 있다. 함수가 종료 될때 파괴
	// 동적할당 : 원할때 지울수 있다. 자유 롭다.
	free(score2); // score2를 지우는 것이 아니라
				  // score2가 가리키는 곳을 지우는것


}