#include <iostream>
#include "Child.h"
#include "Parents.h"
#include "Test.h"
using namespace std;


int main()
{
	Parents* m_Parents = new Child;
	Test* m_Test = new Test;
	int i = 0;
	cin >> i;
	if (1 == i)
	{
		dynamic_cast<Child*>(m_Parents)->Render();
		dynamic_cast<Child*>(m_Parents)->Set(30);


		FILE* fp = nullptr;
		errno_t err = fopen_s(&fp, "TestOnly.txt", "wb");
		if (0 == err)
			fwrite(&m_Parents, sizeof(Child), 1, fp);
		fclose(fp);
		//FILE* fp;
		//errno_t err = fopen_s(&fp, "../TextRPG.txt", "wb");
		//if (0 == err)
		//{
		//	fwrite(m_Player, sizeof(CPlayer), 1, fp);
		//	cout << "저장완료" << endl;
		//	system("pause");
		//}
		//
		//fclose(fp);
	}

	else if(2 == i)
	{
		FILE* fp = nullptr;
		Child temp;
		errno_t err= fopen_s(&fp, "TestOnly.txt", "rb");
		if(err ==0 )
			fread(&temp, sizeof(Child), 1, fp);
		*m_Parents = *(dynamic_cast<Child*>(&temp));
		dynamic_cast<Child*>(m_Parents)->Render();
		fclose(fp);


		//FILE* fp;
		//CPlayer temp;
		//errno_t err = fopen_s(&fp, "../TextRPG.txt", "rb");
		//if (0 == err)
		//{
		//	fread(&temp, sizeof(CPlayer), 1, fp);
		//	cout << "불러오기" << endl;
		//	system("pause");
		//}
		//*m_Player = *(dynamic_cast<CCharacter*>(&temp));
		//fclose(fp);
	}






	else if (3 == i)
	{
		FILE* fp = nullptr;
		m_Test->Render();
		m_Test->Set();
		fopen_s(&fp, "TestYap.txt", "wb");
		fread(&m_Test, sizeof(Test), 1, fp);
		fclose(fp);
	}
	else if (4 == i)
	{
		Test a;
		FILE* fp = nullptr;
		fopen_s(&fp, "TestYap.txt", "rb");
		fwrite(&a, sizeof(Test), 1, fp);
		m_Test->Render();
		fclose(fp);
	}
	
}