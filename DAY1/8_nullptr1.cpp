// 11_nullptr1.cpp    54 page

int main()
{
	// 0의 정체 : 0은 정수지만 포인터로 암시적 형변환된다.
	int  n1 = 0; // ok
	int* p1 = 0; // ok
				 
	int x = 0;
//	int* p2 = x; // error. 오직, "리터럴 0"만 포인터 초기화에 사용가능합니다.


	// 0은 원래 포인터가 아닌 정수인데, 포인터 초기화에 사용되는 것은
	// 좋지 않다고 생각했습니다

	// 그래서, C++11 만들때 nullptr 을 만들었습니다.
	int* p3 = nullptr; 
//	int n3 = nullptr; //error. nullptr 은 정수가 아닌 "널포인터"입니다.

}
