#include <iostream>

using namespace std;

// ##1. �����Ҵ�
// ���α׷��Ӱ� �ʿ信���� �޸𸮸� �Ҵ��ϰ� ����(��ȯ)�ϴ� ����.
// �� �� Heap������ ����Ѵ�.

// ##2. ���� ������ �ּҸ� ��ȯ�� ���.
char* InputString()
{
	char szName[32] = "";
	cin >> szName;

	return szName;
}

// ##8. �����Ҵ����� �ذ�.
char* InputStringEx()
{
	char* ptr = new char[32]{};

	cin >> ptr;

	return ptr;
}


void main()
{
	// ##8. �����Ҵ����� �ذ�.
	char* p = InputStringEx();

	cout << p << endl;

	delete[] p;
	p = nullptr;


	//// ##7. C++�� �����迭.
	//int iCount = 0;

	//cout << "�� ��?: ";
	//cin >> iCount;

	////int* ptr = new int[iCount];	// ��� ���� ������ �� �ʱ�ȭ
	//int* ptr = new int[iCount] {};	// ��� ���� 0 �ʱ�ȭ

	//for (int i = 0; i < iCount; ++i)
	//	cout << ptr[i] << endl;

	//// �����迭 ����
	//delete[] ptr;
	//ptr = nullptr;









	//// ##6. C++�� �����Ҵ�.
	//// new �����ڷ� �Ҵ��ϰ� delete �����ڷ� �����Ѵ�.

	//// 1.
	////int* ptr = new int;	// Heap������ int �޸� �Ҵ�.
	////cout << *ptr << endl; // ������ �� �ʱ�ȭ.

	////delete ptr;
	////ptr = nullptr;

	//// 2.
	//int* ptr = new int(10);	// �Ҵ�� ���ÿ� 10 �ʱ�ȭ

	//cout << *ptr << endl; 

	//delete ptr;
	//ptr = nullptr;







	//////////////////////////////////////////////////////////////////////////////

	//// ##5. calloc

	//int iCount = 0;

	//// �����迭�� ��Ÿ�� �� �迭�� ���̸� ���� �� �ִ�.
	//cout << "�� ��?: ";
	//cin >> iCount;

	//// �����迭
	//int* ptr = (int*)calloc(iCount, sizeof(int)); // malloc�� �޸� �ڵ� 0 �ʱ�ȭ.

	//// cout << sizeof(ptr) << endl; // �����迭 ũ�� X

	//for (int i = 0; i < iCount; ++i)
	//	cout << ptr[i] << endl;

	//free(ptr);
	//ptr = nullptr;





	//// ##4. malloc
	//// �����Ҵ� �Լ�. �Ҵ�� Heap������ �ּҸ� ��ȯ���ش�.

	//// ���� ptr�� Heap������ �ּҸ� ���� �ִ�. �� ������ intŸ�Կ� 4����Ʈ �����̴�.
	//int* ptr = (int*)malloc(sizeof(int));

	//// malloc�� ���� ������ ������ �ʱ�ȭ �ȴ�.
	//cout << *ptr << endl;

	//*ptr = 100;
	//cout << *ptr << endl;

	//// free�Լ�: �����Ҵ� ���� ����(��ȯ).
	//free(ptr);
	//ptr = nullptr; // ��۸� ������ ���� ����.

	//if(ptr) // ��۸� ������ ���� ����.
	//	*ptr = 200;



	// ##3. C������ �����Ҵ� ǥ���Լ���.
	// malloc, calloc






	//// ##2. ���� ������ �ּҸ� ��ȯ�� ���.
	//char* p = InputString();

	//// p�� �̹� ������ ������ �ּҸ� ���� �ִ� -> Dangling Pointer (��۸� ������)
	//cout << p << endl;
}