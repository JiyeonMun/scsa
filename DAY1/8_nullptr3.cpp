#include <iostream>

void foo(void* p) { std::cout << "void*" << std::endl; }	// 1
void foo(int n) { std::cout << "int" << std::endl; }	// 2

void goo(char* p) { std::cout << "goo" << std::endl; }

int main()
{
	// ������ "0"�� �����θ� ����սô�.
	// ������ 0�� �ʿ��ϸ� "nullptr" ����ϼ���
	foo(0);
	foo(nullptr);

	goo(nullptr);

	// �������� �����ϴ�.
	auto ret = �������Լ�();

	if (ret == 0) {}		// ret �� �����ϱ�� ? ������ �ϱ�� ?
	if (ret == nullptr) {}	// ret �� �����Ͷ�� ���� �˼� �ֽ��ϴ�.

}
