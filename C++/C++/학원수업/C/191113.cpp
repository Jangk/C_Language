#include <iostream>

using namespace std;

void main()
{
	// ##5. ���ڿ� �� �Լ� strcmp
	/*char szName1[32] = "Hello";
	char szName2[32] = "Hello";*/

	//// �ܼ��� �� �����ͳ��� �ּҸ� ���ϰ� �ִ�. �ǹ� ����.
	//if (szName1 == szName2) 
	//	cout << "�� ���ڿ��� ����" << endl;
	//else
	//	cout << "�� ���ڿ��� �ٸ���" << endl;

	
	//// strcmp�� ���ϴ� �� ���ڿ��� ���� �� 0�� ��ȯ.
	//// �ٸ��� 0�� �ƴ� ���� ��ȯ.
	//if (!strcmp(szName1, szName2))
	//	cout << "�� ���ڿ��� ����" << endl;
	//else
	//	cout << "�� ���ڿ��� �ٸ���" << endl;





	// ##4. ���ڿ� ���� �Լ� strcat_s
	//char szName1[32] = "Hello";
	//char szName2[32] = "World";

	//szName1 + szName2; // Error
	//szName1 += szName2; // Error

	// 1. dest�ڸ��� ����(��)���� ���޵Ǵ� ���
	//// strcat_s(dest, src): dest�� null���� �ڸ����� src�� �̾����.
	//strcat_s(szName1, szName2);
	//cout << szName1 << endl;

	// 2. dest�ڸ��� �ܼ��� char*�� ���޵Ǵ� ���
	//// strcat_s(dest, size, src)
	//char* p = szName1;
	//strcat_s(p, 32, szName2);

	//cout << szName1 << endl;






	// ##3. ���ڿ� ���� �Լ� strcpy_s
	//char szName1[32] = "Hello";
	//char szName2[32] = "";

	// szName2 = szName1; // Error

	// 1. dest�ڸ��� ����(��)���� ���޵Ǵ� ���
	// strcpy_s(dest, src): dest�� src�� ����
	//strcpy_s(szName2, szName1); 
	//cout << szName2 << endl;

	// 2. dest�ڸ��� �ܼ��� char*�� ���޵Ǵ� ���
	// strcpy_s(dest, size, src)
	//char* p = szName2;

	// �ι�° ���ڿ� size�� �����ؾ���.
	//strcpy_s(p, 32, szName1);
	//cout << szName2 << endl;






	//// ##2. ���ڿ� ���� �Լ� strlen
	//// null���ڸ� ������ ���� ���ڿ� ���� ��ȯ.
	//char szName[32] = "Hello";

	////cout << sizeof(szName) << endl; // 32����Ʈ
	//cout << strlen(szName) << endl;




	// ##1. ���ڿ��� ���� ǥ���Լ���.. <string.h>
	// strlen, strcpy_s, strcat_s, strcmp
}