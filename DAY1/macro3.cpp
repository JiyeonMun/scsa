// 매크로는 되도록 ()를 많이 사용해야 안전합니다.(완전히 안전하지는 않습니다.)
#define add1(x, y) (x) + (y)	

inline int add2(int x, int y) { return x + y; }
       int add3(int x, int y) { return x + y; }

int main()
{
	int n1 = add1(1, 2); // 문자 치환 방식의 인라인 치환
	int n2 = add2(1, 2); // 컴파일러가 기계어 코드를 치환
	int n3 = add3(1, 2); // add3 함수로 이동(치환 아님)
}

// cl macro3.cpp /EP