// Vector11
#include <iostream>  // <> : C++ ǥ���� �����ϴ� ��� �����Ҷ�
#include "Vector.h"  // "" : ����ڰ� ���� ��� �����Ҷ�
#include <vector>	 // C++ ǥ�ؿ� �̹� vector �ֽ��ϴ�.

// vector : �迭�� ����������, ũ�� ������ �����ϴ�

int main()
{
//	Vector<int> v(4);
	std::vector<int> v(4);

	v.at(0) = 10;
	v.resize(8);
	std::cout << v.at(0) << std::endl;

	// C++ ǥ�� vector �Ұ�
	
	std::vector<int> v1 = { 1,2,3,4,5 }; // �̷��� �ʱ�ȭ�� ����

	v1.at(0) = 10;// �̷��Ե� ������

	v1[0] = 10;   // �迭ó�� []�� ����.


	v1.push_back(20); // ���� �Ѱ� �߰�.. (���̽� ����Ʈ�� vector�Դϴ�.)
										// s.append(20)

	std::cout << v1.size() << std::endl; // 6
}
// ��ü���� ��� : �ʿ��� Ÿ���� ����� ��..
// => �̹� ��� ǥ�ؿ���, "���� �Ǹ��� ���� Ÿ��"�� ����(class�� ����)
// => std::string, std::vector 
// => STL : Standard Template Library, C++ ǥ�ض��̺귯�� �̸�.
