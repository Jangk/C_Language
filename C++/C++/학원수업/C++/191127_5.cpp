#include <iostream>

using namespace std;

// ##1. 캡슐화: 구현 내용을 외부로부터 은닉.

class C콧물약
{
public:
	void 복용()
	{
		cout << "콧물이 멎는다." << endl;
	}
};

class C재채기약
{
public:
	void 복용()
	{
		cout << "재채기가 멎는다." << endl;
	}
};

class C코막힘약
{
public:
	void 복용()
	{
		cout << "코가 뚫린다." << endl;
	}
};

// 캡슐화
class C콘택600
{
private:
	C재채기약		cap1;
	C콧물약		cap2;
	C코막힘약		cap3;

public:
	void 복용()
	{
		cap1.복용();
		cap2.복용();
		cap3.복용();
	}
};

void main()
{
	// 캡슐화 O
	C콘택600 cap;

	// 복용하는 입장에서는 복용 순서를 굳이 숙지할 필요가 없다. -> 캡슐화.
	cap.복용();



	//// 캡슐화 X
	//C재채기약		cap1;
	//C콧물약		cap2;
	//C코막힘약		cap3;

	//// 만약 복용순서를 꼭 지켜야 한다면?
	//cap1.복용();
	//cap2.복용();
	//cap3.복용();
}