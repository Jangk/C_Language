#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	// È¦Â¦
	srand(unsigned(time(nullptr)));

	int iCom = 0, iPlayer = 0, iWin = 0, iLose = 0;

	for (int i = 0; i < 3; ++i)
	{
		system("cls");

		iCom = (rand() % 10) + 1;		

		cout << "1.È¦ 2.Â¦" << endl;
		cout << "¼±ÅÃ: ";
		cin >> iPlayer;		

		switch (iPlayer)
		{
		case 1:
		case 2:
			if ((iPlayer - 1) != (iCom % 2))
			{
				cout << "Á¤´ä!" << endl;
				++iWin;
			}
			else
			{
				cout << "¿À´ä!" << endl;
				++iLose;
			}
			break;
		}

		cout << "ÄÄÇ»ÅÍ: " << iCom << endl;
		system("pause");
	}

	cout << iWin << "½Â " << iLose << "ÆÐ" << endl;
}