#include <iostream>

template<typename T1, typename T2>
auto Add1(T1 a, T2 b) -> decltype(a + b) 
{										
	return a + b;
}
// ������ decltype�� ������ auto�� �տ� ��� �Ǵ°ǰ���?
// => C++14 ���ʹ� ���� ��ȯ Ÿ���� ǥ������ �ʰ� auto �� ��� �˴ϴ�.
// => ������ �̰��� return �������� Ÿ���� �߷еǴµ�..
//    return ���� ������ ��� �߷� �Ҽ� �����ϴ�.
//    �� �ڵ�� "��ȯ Ÿ���� ���" �����Ƿ� return ���� ������ �� ���� �����ϴ�.
template<typename T1, typename T2>
auto Add2(T1 a, T2 b)
{
	return a + b;
//	if (a == 1) return a;
//	return b;
}

int main()
{
	std::cout << Add1(1, 3.4) << std::endl;
	std::cout << Add2(1, 3.4) << std::endl;
}


