#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "�л����� >> ";
	std::cin >> cnt;

	// 3. �Էµ� �л��� ��ŭ �ٽ� ������ �Է� �޾ƾ� �մϴ�.
//	int score[cnt]; // error. �迭�� ũ��� ������ ������ ����.

	// ����ð� ������ ũ�� ��ŭ�� �޸�(�迭)�� �Ҵ��Ҽ� �ִ� ������ ���
	// => ���� �޸� �Ҵ�
	// => C : malloc,  C++ : new

//	new int[cnt];	// �̷��Ը� �ϸ� int�� 10�� �Ҵ�������
					// �Ҵ��� �޸𸮿� ������ �̸��� ����
					// �ּҵ� ���� �ʾұ� ������ 
					// �ش� �޸𸮿� ������ ����� �����ϴ�.

	// 1. int 10 ���� �Ҵ�
	// 2. �ּҸ� ��� "������ ���� p�� ��������" �̹Ƿ� ���ÿ� ����.
	int* p = new int[cnt];

	// C ���� �����ʹ� �迭 ó�� ��밡���ϹǷ� p�� �迭ó�� ����ϼ���
	p[0] = 10;
	p[1] = 20;

	// ���� ���� : ��Ģ�� ���� �ڵ� �ı�, ����ڰ� ���Ѵٰ� ��� ����� �����ϴ�.

	// �� �޸� : ����ڰ� ���Ҷ� �����Ҽ� �ֽ��ϴ�.
	//			 ��, ����ڰ� �������� ������ ���α׷� ����� ���� �޸𸮿�����
	//			 ���α׷� ����ÿ��� OS�� �ڵ����� �����մϴ�.

	// �� �޸� �����ϱ�. C�� free, C++ delete
	delete[] p;	// ����!!. p ������ ����� ���� �ƴմϴ�.
				// p�� ����Ű�� ���� ����� ���Դϴ�.

	// �������� p �� ��Ģ�� ���� �ڵ����� ����
	// => �ڽ��� ������ ������ �����

} // <<== �� ���� p �ı�.