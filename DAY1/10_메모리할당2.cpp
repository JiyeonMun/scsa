#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << "�л��� ����ΰ��� >> ";

	int cnt;
	std::cin >> cnt;

	// �Էµ� �л��� ��ŭ�� ������ �ٽ� �Է� �ް� �ʹ�.
//	int arr[10];	// ok. �ڵ带 �ۼ��Ҷ� ��Ȯ�� ũ�⸦ �����ϴ� ���� ok
//	int score[cnt]; // error. ����ð��� ������ ������ŭ�� �迭 ������ �ȵ�

	// ����ð��� ������ ũ�� ��ŭ�� �޸𸮸� �Ҵ��Ҽ� �ִ� ������ ���
	// => ���� �޸� �Ҵ�, "���� �����ο� �޸� ����"

	int* score = (int*)malloc(sizeof(int)*cnt);
	free(score);
}