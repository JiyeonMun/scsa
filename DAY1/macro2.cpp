// macro2.cpp
#include <cstdio>

#define SQUARE(x)   (x) * (x)

int main()
{
	int a = 3;
	
//	int ret = SQUARE(a+1); // (a + 1) * (a + 1)

	int ret = SQUARE(++a); // (++a) * (++a) => 25

	printf("%d\n", ret); // ��� ������ ������
}
// ��� : ��ũ�δ� "���� ġȯ" ����Դϴ�.
//       ���װ� �ʹ� �����ϴ�.
//		 �� SQUARE �� ���ڷ� "++a"�� ����ϸ� ���� �Դϴ�.
//		 SQUARE ��ũ�θ� �ƹ��� �߸��� �� ������ �ذ��Ҽ� �����ϴ�.

//		��, ��ũ�� �Լ��� �ζ��� ġȯ�� ȿ���� ������ �ֽ��ϴ�.

// cl macro2.cpp /EP