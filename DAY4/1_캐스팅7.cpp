int main()
{
	const int c = 10;

	// const int �� �ּҸ� char* �� ���
	// => �� �̰� �ʿ� �ϳ��� ?? 
	// => �Ϲ����� ���� �ʿ� �����ϴ�.!!

	// 1. C ��Ÿ��
	char* p1 = (char*)&c; // ok
	
	// 2. C++ ��Ÿ��
//	char* p2 = static_cast<char*>(&c); // error.

//	char* p2 = reinterpret_cast<char*>(&c); // error.	
											// c�� const �̹Ƿ�!

//	char* p2 = const_cast<char*>(&c); // error.	
								// const_cast�� ������� ���� ����
								// c �� int �ε�, �ּҸ� char*����������


	char* p2 = reinterpret_cast<char*>( const_cast<int*>(&c) );
					// const int* => int* �� �������Ŀ�(const_cast���)
					// int* => char* �� ����(reinterpret_cast ���)
}