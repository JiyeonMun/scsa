#include <iostream>

int main()
{
	std::cout << "A" << std::endl;

	// �ᱹ cout �� ��ü�̹Ƿ� 
	// operator<< �ܿ��� ���� ��� �Լ��� �ֽ��ϴ�.

	std::cout << "hello";	// "hello" �� ��� ȭ�� ��µǴ� ���� �ƴϰ�
							// ��� ���ۿ� �ְ�
							// ��� ���۰� ���� ���ų�, ���̻� ����Ÿ�� ������ ������
							// �ѹ��� ȭ�鿡 ���

	std::cout.flush(); // fflush(stdout)
						// ��� ������ ������ ���, ȭ�鿡 ���

	
}