#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a[] = { 9,7,6,2,3,1,5,0,4,8 };
	int b,i=0,j=0;
	while ( i <9)
	{
		while ( j < 9-i)
		{
			if (a[j] > a[j + 1])
			{
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
			j++;

		}
		i++;
	}
	for ( i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}