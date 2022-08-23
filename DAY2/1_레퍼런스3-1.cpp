// ���ڷ� ���� ���� �������� �ʴ� �Լ��� ������� �մϴ�.
// ������ ���� ���� ?
void f1(int n)        { int v = n; } // �б⸸
void f2(const int& r) { int v = r; } // �б⸸

int main()
{
	int value = 10;
	f1(value);
	f2(value);
}

// C++ ���� �Լ� ���ڸ� �޴� ��Ģ => �߿��մϴ�.

// 1. ������ ���� �����ϴ� ��� - "in/out parameter ��� �մϴ�."
// => �����͵� ����, 
// => reference �� �����ϴ�.   
void inc1(int* p) { ++(*p); }
void inc2(int& r) { ++r; }

// 2. ������ ���� �������� �ʴ� ��� - "in parameter"��� �մϴ�.
// primitive type �� ��� ( ��� ��ü�� ���� �ϴ� Ÿ��)
// => call by value �� �ϼ���

// user define type( ����ü�� ���� Ÿ�� )
// => �Ϲ������� ũ�Ⱑ ū ��찡 �����ϴ�.
// => ���纻�� ������带 ���ƾ� �մϴ�.
// => const reference �� �ϼ���

void f1(int n) {}
void f2(const Rect& n) {}

// ���ۿ��� "C++ Core GuideLine " �˻� �ϼ���
// => 1��° ��ũ Ŭ��
// => "C++ â����"�� C++�� �ڵ��Ҷ��� �� "�� ��Ģ�� ���Ѷ�"
//    ��� �����ϴ� 500������ ��Ģ


/*
void f1(const string& s);  // OK: pass by reference to const; always cheap
void f2(string s);         // bad: potentially expensive
void f3(int x);            // OK: Unbeatable
void f4(const int& x);     // bad: overhead on access in f4()
*/