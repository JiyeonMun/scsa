// 레퍼런스  변수의 대상 타깃을 변경하는 작업은 불가능한건가요?
// => 네.. 
int main()
{
	int n1 = 10;
	int n2 = 20;

	// p1과 r1은 모두 n1 을 가리킵니다(메모리 모양을 항상 생각하세요)
	int* p1 = &n1;
	int& r1 = n1;

	// 핵심 
	// pointer 는 가리키는 곳을 변경할수 있지만
	// reference 는 가리키는 곳을 변경할수 없습니다.
	p1 = &n2; // 가리키는 곳 변경
	r1 = n2;  // n1 에 n2 값을 넣은것, 가리키는 곳 변경 아님.

	int& r2 = n2;	// 이렇게 초기화 한 후에는 
					// => r2는 평생 n2 만 가리키게 됩니다.
					// => 가리키는 곳(변수) 자체를 변경하는 방법은 없습니다.

	//배열은 이름이 곧 주소인데, 배열에 대한 reference는 어떻게 초기화해야하나요 ?
	//=> 타입& reference이름 = 초기값

	int x[3] = { 1,2,3 }; // 핵심 1. x의 타입은 int[3] 입니다.

	int& r3 = n; 
	int &r4 = n; // 위와 같은 코드 입니다.


//	int &r5[3] = x;	// 이표기가 배열의 참조 인데
					// 연산자 우선순위 문제로 에러 입니다.
					// r5 의 앞뒤로, &, [ 가 있는데, [가 우선순위가 높습니다.
					// => 그래서 컴파일러는 r5를 배열로 해석합니다.

	int(&r5)[3] = x; // 이 코드가 배열의 참조 입니다.
	
	

}