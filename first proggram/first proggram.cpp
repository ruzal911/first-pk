#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	int const size = 10;
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int a[size];
	bool c;int b;
	bc:
	for (int i = 0; i < size;)
	{
		c = false;b = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (a[j] == b)
			{
				c = true;
				break;
			}
		}

		if (c == false)
		{
			a[i] = b;
			i++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << endl;

	}
	cout << "Введите 1 если хотите продолжить или 0 если хотите завершить " << endl;
	int m;
	cin >> m;
	if (m == 1)
		goto bc;
	cout << "dfsd";
	
}