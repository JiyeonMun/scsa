#include <iostream>

int main()
{
	int n = 0x11223344;

	int*  p1 = &n; // ok   int 주소를 int* 에 담으므로 ok.
	
	char* p2 = &n; // error. 물리적으로는 p2 도 결국 n 주소를 담는데
					// 문제는 없습니다.
					// 단지 컴파일러가 "위험하다"고 보고 안되게 하는것

	// 이때는 캐스팅 이라는 것을 하면 됩니다.
	char* p3 = (char*)&n; // ok.. 위험한지 아는데, 
							//    그래도 p3에 담고 싶다!
}