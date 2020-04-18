#include<iostream>
#include<math.h>
#include<Windows.h>

using namespace std;

int main()
{

	int Var, Var2;
	int Age = 10;
	int a = 5;
	int b = 10;

	const int COUNT_DAYS_IN_WEEK = 7;
	const char NEW_LINE = '\n';
	const char TAB = '\t';

	double c = 1.1551352341;
	char test = 'ffff';
	bool test_2 = true;

	cout << "Two numbers: ";
	cin >> Var >> Var2;
	cout << "number 1 = " << Var << NEW_LINE << "number 2 = " << Var2 << endl;

	cout << Age << " " << a << " " << b << " " << c << " " << test << ' ' << test_2 << endl;
	cout << COUNT_DAYS_IN_WEEK << NEW_LINE << TAB << TAB;
}