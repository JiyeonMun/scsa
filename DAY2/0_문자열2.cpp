// 26 page
#include <iostream>
#include <cstring>  // C ����� "string.h" �� C++ ����, 
					// => ���ڿ� �Լ�(strcpy��) ����
#include <string>   // C++ ���ڿ� Ÿ���� ���� ���.
					// => "std::string"

int main()
{
	// C++ ������ ���ڿ� ó��
	// => std::string �̶�� Ÿ���� ����մϴ�
	// => ���� ���� "class" ��� �������� ���� Ÿ��
	std::string s1 = "abcd";
	std::string s2 = "efgh";

	// ������ ������ ���� �ǰ�, ������ ������ �˾� �μ���
	// int ���� ó�� �����ϰ� ����ϼ���
	s1 = s2; // ����	- "efgh"

	s1 = s1 + s2; // ������ ����   "efghefgh"

	if (s1 == s2) {} // �� ����. false

	std::cout << s1 << std::endl; // "efghefgh"

	// Ȥ�� ���ڿ� ���̴� ��� ���ϳ��� ? ���̺귯���� ���� �ֳ��� ?
	int n1 = s1.size(); // ��� �Լ���� �����Դϴ�. ���� ���� ����
}

