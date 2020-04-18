#include<iostream>
#include<math.h>
// #include<Windows.h>

/*

\b Удаление последнего выведенного символа
\n Перейти на начало новой строки
\t Перейти к следующей позиции табуляции

//////////////////////////////////////////

\\ Ввести обратную черту \
\" Вывести двойную кавычку "
\' Вывести одинарную кавычку '


*/
using namespace std;

int main()
{
	// SetConsoleCP(1251);         - Отдельная шняга
	// SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "Rus");

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

	/*
	cout << "Введите первое число: ";
	cin  >> Var;
	cout << "Введите второе число: ";
	cin  >> Var2;
	*/

	cout << "Введите два числа: ";
	cin >> Var >> Var2;
	cout << "число 1 = " << Var << NEW_LINE << "число 2 = " << Var2 << endl;

	cout << Age << " " << a << " " << b << " " << c << " " << test << ' ' << test_2 << endl;
	cout << COUNT_DAYS_IN_WEEK << NEW_LINE << TAB << TAB;

	/*
	cout << "Предвижу всё: вас оскорбит\n\n"
			"Печальной тайны объясненье.\n"
			"Какое горькое презренье\n"
			"Ваш гордый взгляд изобразит!\n\n"
			"Повсюду следовать за вами,\n"
			"Улыбку уст, движенье глаз\n";
	*/
}