// typedef 를 해석하는 정확한 방법

typedef int DWORD;
typedef int AR[3];  

// typedef A B : "A 의 별명 B를 만들겠다" 라고 해석하지 마세요!!

// 변수 자리의 "이름"을 타입으로 만드는 것 입니다.

int k;		// int 타입의 변수 k
int a[3];	// int[3] 타입의 배열 a


int main()
{
	DWORD n; // int n 입니다.
	AR a;    // 해석해 보세요. a는 무슨 타입일 까요 ?
}