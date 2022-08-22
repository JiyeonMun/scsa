#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << "학생이 몇명인가요 >> ";

	int cnt;
	std::cin >> cnt;

	// 입력된 학생수 만큼의 점수를 다시 입력 받고 싶다.
//	int arr[10];	// ok. 코드를 작성할때 정확한 크기를 지정하는 것은 ok
//	int score[cnt]; // error. 실행시간에 결정된 갯수만큼의 배열 생성은 안됨

	// 실행시간에 결정된 크기 만큼의 메모리를 할당할수 있는 유일한 방법
	// => 동적 메모리 할당, "가장 자유로운 메모리 공간"

	int* score = (int*)malloc(sizeof(int)*cnt);
	free(score);
}