// ��ũ�δ� �ǵ��� ()�� ���� ����ؾ� �����մϴ�.(������ ���������� �ʽ��ϴ�.)
#define add1(x, y) (x) + (y)	

inline int add2(int x, int y) { return x + y; }
       int add3(int x, int y) { return x + y; }

int main()
{
	int n1 = add1(1, 2); // ���� ġȯ ����� �ζ��� ġȯ
	int n2 = add2(1, 2); // �����Ϸ��� ���� �ڵ带 ġȯ
	int n3 = add3(1, 2); // add3 �Լ��� �̵�(ġȯ �ƴ�)
}

// 1. cl macro3.cpp /EP   �� ��ó�� ������ �ڵ� Ȯ���ϼ���
// 2. godbolt.org ���� add2(1,2) �� add3(1,2) �� ���� �ڵ� ������.