#include<iostream>
#include<math.h>
#include<Windows.h>

using namespace std;

/*Operators*/

// Unary
// Binary
// Ternary

void main()
{

	int a, b, c, sum, multi;
	float average;

	cout << "Enter 3 numbers: ";
	cin >> a >> b >> c;

	sum = a + b + c;
    multi = a * b * c;
	average = (float)(a + b + c) / 3;

	cout 
	<< "sum = " << sum << endl
	<< "prod = " << multi << endl
	<< "average = " << average << endl;
}