#include <iostream>

int main()
{
	std::cout << "A" << std::endl;

	// 결국 cout 은 객체이므로 
	// operator<< 외에도 많은 멤버 함수가 있습니다.

	std::cout << "hello";	// "hello" 가 즉시 화면 출력되는 것은 아니고
							// 출력 버퍼에 넣고
							// 출력 버퍼가 가능 차거나, 더이상 데이타가 들어오지 않으면
							// 한번에 화면에 출력

	std::cout.flush(); // fflush(stdout)
						// 출력 버퍼의 내용은 즉시, 화면에 출력

	
}