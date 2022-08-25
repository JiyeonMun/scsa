#include <iostream>

class Counter
{
	int cnt = 0;
public:
	// 결론, *this 반환 하는 함수는 반드시 참조 반환해야 합니다.
//	Counter increment()
	Counter& increment()
	{
		++cnt;
		return *this;
	}
	~Counter() { std::cout << "~Counter" << std::endl; }
	int get() const { return cnt; }
};
int main()
{
	Counter c;
//	c.increment();
//	c.increment();
//	c.increment();
	c.increment().increment().increment(); 

	std::cout << c.get() << std::endl; // ?
}

// 주의 사항!!
// 지역변수는 절대 참조 반환하면 안됩니다.
Counter& fn()
{
	Counter c;
	return c; // 버그.. 절대 참조 반환하면 안됩니다.
				// 반드시, 값반환만 사용해야 합니다.
}