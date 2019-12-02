#include <iostream>

using namespace std;

class CTest
{
public:
	explicit CTest(int a)
	{
		cout << "인자있는 생성자" << endl;
	}
};

void main()
{
	CTest obj1(100);

	// 이 때 100은 CTest 타입으로 묵시적 형변환이 일어난다.
	// 따라서, 아래와 같은 문장은 문법적 혼란을 줄 수 있으므로 
	// explicit키워드를 이용하여 묵시적 형변환을 방지한다.
	//CTest obj2 = 100;
}