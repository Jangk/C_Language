#include <iostream>
using namespace std;



// ���ø� Ŭ���� Ʈ��.
// ũ�Ⱑ �ٲ��� �ʴ� ���� �����.
//					size_t �� unsigned int���� size_t�� ���ø��� ��밡��
template <typename T, size_t N>
class FixedVector
{
public :
	// ������.
	FixedVector<T, N>() : m_Size(0)
	{

	}
private :
	int m_Size;
	T m_Arr[N]
};



void main()
{
	FixedVector<int, 10> testVec;			//int�� �뷮�� 10���� ���ͻ���
	// ���ø� Ư��ȭ
	// �����ε�ó�� Ư�� �ڷ����� Ư���ϰ� ���.(���� ���ø��� �־�ߴ�.)
	// template<>
	// float pow(float a, float b);
}