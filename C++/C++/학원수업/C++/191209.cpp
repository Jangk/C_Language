#include <iostream>

using namespace std;

// ##1. ���ø� (template)
// Ư�� ��ɿ� ���� �ڷ����� ȣȯ�ǰ� �ۼ��� �����ִ� C++ ���.
// �Լ� ���ø�
// Ŭ���� ���ø�

// ##2. �Լ� ���ø�
template <typename T>
T Add(T a, T b)
{
	return a + b;
}

// ##3. ���ø� Ư��ȭ
template <>
char* Add(char* a, char* b)
{
	int iLen = strlen(a) + strlen(b);
	char* pName = new char[iLen + 1];

	strcpy_s(pName, iLen + 1, a);
	strcat_s(pName, iLen + 1, b);

	return pName;
}

// ##4. typename�� 2�� �̻��� �Լ� ���ø�
template <typename Type_A, typename Type_B, typename Type_C>
void Func(Type_A a, Type_B b, Type_C c)
{
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
}

// ##5. ���ø��� �̿��� �迭 ���� ���ڷ� �޾Ƴ���.
template <typename T, int iLen>
void ArrayFunc(T (&array)[iLen])
{
	cout << sizeof(array) << endl;
}

void main()
{
	//// ##5. ���ø��� �̿��� �迭 ���� ���ڷ� �޾Ƴ���.
	int iArr[5] = { 10, 20, 30, 40, 50 };
	ArrayFunc(iArr);

	//// ##4. typename�� 2�� �̻��� ���ø� �Լ�
	//Func<short, int, double>(2, 100, 3.14);


	//// ##3. ���ø� Ư��ȭ: Ư�� �ڷ����� ���� ���� ��Ȳ�� �߻����� �� �ذ�.
	//char* pName = Add<char*>("Hello", "world");
	//cout << pName << endl;
	//delete[] pName;


	//// ���ø� �Լ�: ȣ�� ������ �־�߸� ������ ������ �ش� �Լ� �ڵ尡 �����ȴ�.
	//int n = Add<int>(10, 20);
	//cout << n << endl;

	//// ������ ������ ���� �Լ� �ڵ带 �����Ѵ�.
	//n = Add<int>(100, 200);
	//cout << n << endl;

	//// float Ÿ�Կ� �����Ǵ� �Լ��ڵ尡 ���� �����ȴ�.
	//float f = Add<float>(3.14f, 3.14f);
	//cout << f << endl;	
}