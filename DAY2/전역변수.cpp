// ��������
// �׳� ���������� �����ؼ� ����ϴ°� ���� ���� ����ΰ��� ?
#include <iostream>

int a;
int b;

int add()
{
	return a + b;
}

int main()
{
	std::cin >> a;
	std::cin >> b;

	int ret = add();

	std::cout << ret << std::endl;
}