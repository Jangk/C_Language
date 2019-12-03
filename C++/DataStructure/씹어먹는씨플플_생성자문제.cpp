#include <iostream>
#include <cmath>
#define ARRAY_MAX 100
using namespace std;

class Point 
{
	int x, y;
	bool m_bIsEmpty;
public:
	bool CheckIsEmpty();
	int GetX();
	int GetY();
	Point(int pos_x, int pos_y);
	Point();
};


class Geometry 
{
	Point **point_array;
	// 현재 공간에 대한 점들의 정보를 담고 있는 배열
	// 물론 배열의 크기는 생성자에서 초기화 하고 충분히
	// 크게 잡도록 합시다 (점 100 개 정도?)

public:
	Geometry(Point **point_list);
	Geometry();
	~Geometry();

	void Add_Point(const Point &point);

	// 모든 점들 간의 거리를 출력하는 함수 입니다.
	void Print_Distance();

	// 모든 점들을 잇는 직선들 간의 교점의 수를 출력해주는 함수 입니다.
	// 참고적으로 임의의 두 점을 잇는 직선의 방정식을 f(x,y) = ax+by+c = 0
	// 이라고 할 때 임의의 다른 두 점 (x1, y1) 과 (x2, y2) 가 f(x,y)=0 을 기준으로
	// 서로 다른 부분에 있을 조건은 f(x1, y1) * f(x2, y2) <= 0 이면 됩니다.
	void Print_Num_Meets();
};



void main()
{
	Geometry CGeometry;
	for(int i = 0; i< 10; ++i)
		CGeometry.Add_Point(Point(10, 10));
	CGeometry.Print_Distance();
	system("pause");

}



// 함수 정의부
Point::Point(int pos_x, int pos_y): x(pos_x), y(pos_y), m_bIsEmpty(false)
{// Point 생성자
}


Point::Point() : x(0), y(0), m_bIsEmpty(true)
{
}


bool Point::CheckIsEmpty()
{
	return m_bIsEmpty;
}


int Point::GetX()
{
	return x;
}


int Point::GetY()
{
	return y;
}


// Geometry ---------------------------------------------


Geometry::Geometry(Point ** point_list) : point_array(point_list)
{// Geometry 생성자
}


Geometry::Geometry()
{// Geometry 생성자
	point_array = new Point*[100];

	for (int i = 0; i < ARRAY_MAX; ++i)
		point_array[i] = new Point;
}


Geometry::~Geometry()
{
	for (int i = 0; i < ARRAY_MAX; ++i)
		delete(point_array[i]);
	delete[](point_array);
}


void Geometry::Add_Point(const Point& point)
{
	Point a = point;
	Point* b = new Point(a.GetX(), a.GetY());
	for (int i = 0; i < ARRAY_MAX; ++i)
	{
		if (point_array[i]->CheckIsEmpty())
		{
			point_array[i] = b;
			break;
		}
	}
}


void Geometry::Print_Distance()
{
	int iDisX = 0;
	int iDisY = 0;
	double fDisTotal = 0;

	for (int i = 0; i < ARRAY_MAX; ++i)
	{
		if (!point_array[i]->CheckIsEmpty())
		{
			iDisX = point_array[i]->GetX();
			iDisY = point_array[i]->GetY();
			fDisTotal += sqrt(pow(iDisX,2) + pow(iDisY, 2));
		}
		else
			break;
	}
	cout << "거리의 총합은 " << fDisTotal << "입니다" << endl;
}


void Geometry::Print_Num_Meets()
{
	// (x1−x2)(y3−y4)−(y1−y2)(x3−x4)
	// https://zetawiki.com/wiki/%EB%91%90_%EC%A7%81%EC%84%A0%EC%9D%98_%EA%B5%90%EC%B0%A8%EC%A0%90


	int iCount = 0;
	int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
	int y1 = 0, y2 = 0, y3 = 0, y4 = 0;


	// point_array가 비어있으면
	if (point_array[0]->CheckIsEmpty())
		return;
	else
	{
		x1 = point_array[0]->GetX();
		y1 = point_array[0]->GetY();
	}

	

	for (int i = 1; i < ARRAY_MAX; ++i)
	{
		if (point_array[i]->CheckIsEmpty())
			break;
		
		else if (1 == i)
		{	// 반복문 처음일때
			x2 = point_array[i]->GetX();
			y2 = point_array[i]->GetY();
		}
		else
		{
			x1 = x2;
			y1 = y2;
			x2 = point_array[i]->GetX();
			y2 = point_array[i]->GetY();
		}
		
	}
	cout << "교점의 수는 " << iCount << "개 입니다." << endl;
}

