#include <iostream>

class Counter
{
	int cnt = 0;
public:
	// ���, *this ��ȯ �ϴ� �Լ��� �ݵ�� ���� ��ȯ�ؾ� �մϴ�.
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

// ���� ����!!
// ���������� ���� ���� ��ȯ�ϸ� �ȵ˴ϴ�.
Counter& fn()
{
	Counter c;
	return c; // ����.. ���� ���� ��ȯ�ϸ� �ȵ˴ϴ�.
				// �ݵ��, ����ȯ�� ����ؾ� �մϴ�.
}