#include <iostream>
using namespace std;


// ����ü�� �⺻�ڷ��� �߿��� ���� ū ����Ʈ �ڷ����� ã�� �� �ڷ��� ũ�⿡ ����
// ���� char int short ������ ������
//      1 + 4  �� 4����Ʈ�� �Ѿ 
//      4   4   4 ����Ʈ�� �Ծ 12����Ʈ�� ��
typedef struct tagPoint
{
	char a;			// 1����Ʈ�� 4����Ʈ ũ�⿡ ���� (1/4)
	short b;		// 2����Ʈ�� 4����Ʈ ũ�⿡ ���� (3/4)		���� �κ��� �е� ����Ʈ��� ��.(����մ�)
	int x, y;		// 4����Ʈ 2�� 
}MY_POINT;			// �� 12����Ʈ


// ����ü�� ����� �ڱ� �ڽ��� �Ϲ� ������ ���� �� ����.(ũ�� �Ҵ翡 ������ �־
//		   ��� ������ �ڱ� �ڽ��� ������ ������ ������ ����Ѵ�.





// UNION ����ü
// ��� ����� ����ū �ڷ����� �޸𸮸� ������.
union UNI
{
	int x;
	int y;					// int�� 2������ 4����Ʈ
};





// enum ����ü
// ���� �� �� �ϳ��� ����
// ���� ���� ���������� 0���� ������� ����
enum BloodType
{
	A,
	B,
	C,
	O
};


union UNI_ARR
{
	struct
	{
		int _1, _2, _3;
		int _4, _5, _6;
		int _7, _8, _9;
	};

	int m[3][3];				// ũ�⸦ �����ϱ⶧���� m[0][0] == _1, m[0][1] ==_2.... ������
								//  == �ڵ�� ���� ���̱⶧���� �������� ����.
};



void Swap(MY_POINT& myPos);

void main()
{
	MY_POINT tPos = { 100, 200 };

	Swap(tPos);

	cout << tPos.x << ", " << tPos.y << endl;
}

void Swap(MY_POINT& myPos)
{
	myPos.x ^= myPos.y ^= myPos.x ^= myPos.y;
	//myPos.x ^= myPos.y;
	//myPos.y ^= myPos.x;
	//myPos.x ^= myPos.y;
}