#include <iostream>
using namespace std;



// 템플릿 클래스 트릭.
// 크기가 바뀌지 않는 벡터 만들기.
//					size_t 는 unsigned int지만 size_t만 템플릿에 사용가능
template <typename T, size_t N>
class FixedVector
{
public :
	// 생성자.
	FixedVector<T, N>() : m_Size(0)
	{

	}
private :
	int m_Size;
	T m_Arr[N]
};



void main()
{
	FixedVector<int, 10> testVec;			//int형 용량이 10개인 벡터생성
	// 템플릿 특수화
	// 오버로딩처럼 특수 자료형만 특수하게 취급.(기존 템플릿이 있어야댐.)
	// template<>
	// float pow(float a, float b);
}