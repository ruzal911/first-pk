#include <iostream>
using namespace std;

class Human
{
public:

	int age;
	string name;
};
int main()
{
	Human Firstname;
	Firstname.age = 5;
	Firstname.name = "Ruzal";
	cout << Firstname.name << endl;
	cout << Firstname.age << endl;

	return 0;
}