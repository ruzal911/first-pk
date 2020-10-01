#include <iostream>
using namespace std;

void F(int *B,int b)
{
	for (int i = 0; i < b; i++)
	{
		cout << B[i] << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "RUS");
	string abc;
	abc = "првиет";
	cout << abc << endl;
	int a[] = {7,8,5,1,3,6,4,5,5,9};
	int b = sizeof(a) / 4;
	F(a,b);
	
}