#include <iostream>
#include <vector>
#include <string>

int main()
{
	int x[5] = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// �迭�� vector ������
	// => ��� ��Ұ� ���ӵ� �޸�
	// => [] �����ڷ� ��� ����
	x[0] = 10; // �迭
	v[0] = 10; // vector

	// ������
	// �迭   : ��� ��Ұ� ���ÿ� �ֽ��ϴ�.
	// vector :��� ��Ұ� ���� �ֽ��ϴ�.

	// ������ vector�� �ξ� ���մϴ�.
	int n = v.size(); // ���� ��� �Լ��� �ְ�
	v.resize(10);     // ũ�� ���浵 �����ϹǷ�  <== �̰��� ���� ū ����


	// Ȥ�� vector�� ������ �迭�� ��� ���峪�� ?
	std::vector<int>    v1(4);
	std::vector<double> v2(4);
	std::vector< std::string >  v3(4);

	// �Ʒ� �ڵ尡 4*4 matrix ����� �ڵ��Դϴ�.
	std::vector< std::vector<int> >  v4(4, std::vector<int>(4));

	v1[0] = 10;
	v2[0] = 3.4;

	v3[0] = "hello";
	int sz = v3[0].size(); // v3[0] �� string �̹Ƿ� string ����Լ�

	v4[0][0] = 0;
}


