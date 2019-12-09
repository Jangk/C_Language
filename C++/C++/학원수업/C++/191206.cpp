#include <iostream>

using namespace std;

// 구조체도 생성자, 소멸자, 복사생성자, 대입연산자 등을 갖는다.
// 상속 및 다형성 또한 가능하다.
struct tagInfo
{
	tagInfo()
	{
		cout << "기본 생성자" << endl;
	}

	tagInfo(int a, float b)
		: iA(a), fB(b)
	{
		cout << "인자있는 생성자" << endl;
	}

	~tagInfo()
	{
		cout << "기본 소멸자" << endl;
	}
	
	int		iA;
	float	fB;
};

class CTest
{
public:
	CTest(int a, float b)
		: m_tInfo(a, b) // 인자있는 생성자를 가진 멤버 변수의 초기화
	{

	}

private:
	tagInfo	m_tInfo;
};

void main()
{
	//tagInfo t(100, 3.14f);

	CTest obj(100, 3.14f);
}