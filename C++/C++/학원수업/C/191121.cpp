#include <iostream>

using namespace std;

// ##1. ��ũ��
// �ݺ������� ���� ���ɸ��� ������� ��ũ�η� �����Ѵ�.
// #define���� �����ϴ� ��ó�����̴�.
// ��ũ�δ� ������ ���� �ܼ� ġȯ�ȴ�. -> ��ó���� Ư¡.

// ##2. ��ũ�� ���
// ����� �̸��� ���� ����Ѵ�. �ڿ� �����ݷ��� �����Ѵ�.
#define PI 3.14f
#define GRAVITY 9.8f
#define MAX_COUNT 5

// ##3. ��ũ�� �Լ�
// ���� ����� "ª�� ����"���� ��ũ�η� �����Ѵ�.
#define SQUARE(X) (X) * (X)
#define AREA_CIRCLE(R) SQUARE(R) * PI

// �� �� �̻��� ��ũ�θ� ������ �� \�� ����϶�! �׷��� �����ٱ��� ��ũ�η� �ν��Ѵ�.
#define SAFE_DELETE(P)	\
if(P)					\
{						\
	delete P;			\
	P = nullptr;		\
}

void main()
{
	// ##3. ��ũ�� �Լ�
	int* ptr = new int(10);

	SAFE_DELETE(ptr);


	/*int iA = SQUARE(2);
	cout << iA << endl;

	iA = SQUARE(2 + 2);
	cout << iA << endl;*/



	//// ##2. ��ũ�� ���
	//cout << PI << endl;
	//cout << GRAVITY << endl;

	//int iArr[MAX_COUNT] = {};
}