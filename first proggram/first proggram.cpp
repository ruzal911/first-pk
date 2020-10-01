#include <iostream>
#include <ctime>
using namespace std;


void main()
{
	int const size = 10;
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int s ,a;
	char x;
a:
	cout << "*****************НАЧНЕМ ИГРУ В 21*****************"<< endl;
	s = 0;
	while (s<=21)
	{
		cout << "Ваша сумма равна: " << s << endl;
		cout << "Взять еще? y/n "<< endl;
		cin >> x;
		if (x == 'y')
		{
			a = rand() % 10 + 1;
			cout << "Вам попалась карта номиналом " << a << endl;
			s += a;
		}
		else
			if (x == 'n')
				goto a;
			else
				system("pause");
	}
	if (s == 21)
		cout << "ПОЗДРОВЛЯЮ ВЫ ВЫЙГРАЛИ!!!!!!"<<endl;
	if (s > 21)
		cout << "Вы проиграли ваша сумма очков равна " << s << endl;
	cout << "Начать заново y/n" << endl;
	char t;
	cin >> t;
	if (t == 'y')
		goto a;
	else
		system("pause");
}