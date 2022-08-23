#include <iostream>

int main()
{
	// 4. 사용자가 -1을 입력할때 까지 계속 입력 받고 싶습니다.
	//   단, 입력된 모든 값은 보관되어 있어야 합니다.

//	int score[4];	// 이렇게 하면 필요없을때 제거할수 없습니다.
					// {}을 벗어나야만 파괴 됩니다.

	int size = 4;	// 배열의 크기를 관리할 변수

	int* score = new int[size];	// 이렇게 하면 원할때 제거가능.

	int count = 0;	// 입력된 갯수


	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;

		score[count++] = n; // 입력값 보관

		if (count == size)
		{
			int* tmp = new int[size + 4];

			// 기존 버퍼(4개짜리 배열)의 내용을
			// 새로운 버퍼(배열)에 복사
			memcpy(tmp, score, sizeof(int) * size );

			// 기존 버퍼 제거
			delete[] score;

			// score에 새로운 메모리 주소 넣기
			score = tmp;

			// 마지막 남은 작업은 ??
			size = size + 4;

		} // <= 포인터 변수 tmp 자체는 이 블럭 벗어날때 파괴
	}

	std::cout << "사용자가 입력한 갯수   : " << count << std::endl;
	std::cout << "현재 할당된 메모리 크기 : " << size << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << score[i] << ", ";
	}

	// 현재 사용하는 score 배열은 결국 동적할당 된것입니다.
	// 더이상 메모리가 필요 없다면 종료 전에 꼭 지우세요
	delete[] score; // score 를 제거하는 것 아니라
					// score 가 가리키는 곳 제거

} // <= score 자체는 이순간 제거됨(지역변수)

// 실행하세요
// 1. 9개쯤 입력하고, 10번째 -1 입력해 보세요
// 2. 결과 확인해 보세요

// 일반 배열 : 크기를 변경할수 없습니다.
// 동적 배열 : 위처럼 만든 코드를 흔히 "동적 배열", "vector"라고 합니다.
//			 메모리가 부족할때 마다 특정 크기(우리는 4개) 씩 계속 키워 가는기술
