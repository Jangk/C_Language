#include <iostream>

using namespace std;

// ##1. ���Ǻ� ������
// #if ~ #endif		#ifdef ~ #endif		#ifndef ~ #endif
// ���ǿ� ���� ������ �ϱ� ���� ��ó�����.

#define RELEASE_VER 1
#define PROJECT_VER 2
#define TEST

void main()
{
	// ##3. #ifndef ~ #endif
	// Ư�� ��ũ�ΰ� ���ǵǾ� ������ FALSE, �ƴ϶�� TRUE
//#ifndef TEST
//	cout << "TEST ��ũ�� ���ǵǾ� ���� ����" << endl;
//#else
//	cout << "TEST ��ũ�� ���ǵǾ� ����" << endl;
//#endif





////	// ##2. #ifdef ~ #endif
////	// Ư�� ��ũ�ΰ� ���ǵǾ� ������ TRUE, �ƴ϶�� FALSE
////	// #elif ������ ����� �� ����.
//#ifdef TEST
//	cout << "TEST ��ũ�� ���ǵǾ� ����" << endl;
//#else
//	cout << "TEST ��ũ�� ���ǵǾ� ���� ����" << endl;
//#endif





//	//##1. #if ~ #endif	
//	// ���� �� ������, ������ �� !������
//#if (1 == PROJECT_VER)
//	cout << "���� 1 ����" << endl;
//#elif (2 == PROJECT_VER)
//	cout << "���� 2 ����" << endl;
//#else
//	cout << "���� 3 ����" << endl;
//#endif


//#if RELEASE_VER
//	cout << "ġƮŰ ����" << endl;
//#else
//	cout << "ġƮŰ ����" << endl;
//#endif
}