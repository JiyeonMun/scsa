#include <iostream>
#include <vector>
#include <string>

int main()
{
	int x[5] = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// 배열과 vector 공통점
	// => 모든 요소가 연속된 메모리
	// => [] 연산자로 요소 접근
	x[0] = 10; // 배열
	v[0] = 10; // vector

	// 차이점
	// 배열   : 모든 요소가 스택에 있습니다.
	// vector :모든 요소가 힙에 있습니다.

	// 하지만 vector가 훨씬 편리합니다.
	int n = v.size(); // 편리한 멤버 함수도 있고
	v.resize(10);     // 크기 변경도 가능하므로  <== 이것이 가장 큰 장점


	// 혹시 vector로 이차원 배열은 어떻게 만드나요 ?
	std::vector<int>    v1(4);
	std::vector<double> v2(4);
	std::vector< std::string >  v3(4);

	// 아래 코드가 4*4 matrix 만드는 코드입니다.
	std::vector< std::vector<int> >  v4(4, std::vector<int>(4));

	v1[0] = 10;
	v2[0] = 3.4;

	v3[0] = "hello";
	int sz = v3[0].size(); // v3[0] 은 string 이므로 string 멤버함수

	v4[0][0] = 0;
}


