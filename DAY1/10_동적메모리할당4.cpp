#include <iostream>
#include <cstdlib>

int main()
{
	// C ��Ÿ��
	int* p1 = (int*)malloc(sizeof(int) * 10);
	free(p1);


	// C++ ��Ÿ��
	int* p2 = new int;
	delete p2;


	int* p3 = new int[10];
	delete[] p3; // ���� delete �� �ƴ� delete[]
}
// 52 page
//				malloc						new
// ��ü			�Լ�							Ű����(������)
// ����			�޸� ũ��					Ÿ��
// ��ȯŸ��		void*						���ڷ� ������ Ÿ��*
//				��κ� ���ϴ�Ÿ������ ĳ����		ĳ������ �ʿ� ����.
//				�ؼ� ���
// �޸�����		free						delete, delete[]

// ������ ����	������ ȣ�� �ȵ�				������ ȣ���.   <= ���� ���� ����

// �ٽ� 1. ��?? �����޸𸮸� �Ҵ��ϴ°� ?
//     2. new, delete ����. 