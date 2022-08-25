int main()
{
	const int c = 10;

	// const int 의 주소를 char* 에 담기
	// => 왜 이게 필요 하나요 ?? 
	// => 일반적인 경우는 필요 없습니다.!!

	// 1. C 스타일
	char* p1 = (char*)&c; // ok
	
	// 2. C++ 스타일
//	char* p2 = static_cast<char*>(&c); // error.

//	char* p2 = reinterpret_cast<char*>(&c); // error.	
											// c는 const 이므로!

//	char* p2 = const_cast<char*>(&c); // error.	
								// const_cast는 상수성만 제거 가능
								// c 는 int 인데, 주소를 char*담을수없다


	char* p2 = reinterpret_cast<char*>( const_cast<int*>(&c) );
					// const int* => int* 로 변경한후에(const_cast사용)
					// int* => char* 로 변경(reinterpret_cast 사용)
}