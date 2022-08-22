// 1_namespace5.cpp - 1�� ������ ������. �ּ� ���켼��
#include <stdio.h>

// QA : ����� namespace�� � �޸𸮿� �����ǳ���?
//      => namespace �� �޸𸮸� �߰��� ����ϴ� ���� �ƴ϶�
//		=> �����Ϸ��� ������ �ð��� �Լ� �̸��� �����ϴ� ���� �Դϴ�.

namespace Audio
{
	// ����� �ڵ�				// �����Ϸ��� �Լ��̸��� �����մϴ�.
								// ��� �ٲٴ����� �����Ϸ����� �ٸ��ϴ�.
	void init()					// void Audio_init() 
	{
		printf("Audio init\n"); 
	}
}

namespace Video
{
	void init()				// Video_init()
	{ printf("Video init\n"); }
}
int main()
{
	Video::init();	// call Video_init()
	Audio::init();  // call Audio_init()
}

// godbolt.org �����ϼ���.. �� �ڵ� ���� �ϼ���
// C++�� ���߰�, �� �ڵ� ���ʿ� �ٿ� ��������.
