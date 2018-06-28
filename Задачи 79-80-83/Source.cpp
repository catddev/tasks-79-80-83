#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <iostream>
#include <iomanip> 

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

start:

	cout << "Задача № ";
	cin >> tn;

	switch (tn)
	{
	case 79:
	{
		double p = 1;
		for (double i = 0.1; i <= 10; i += 0.1)
		{
			p = p*(1 + sin(i));
		}
		cout << p << endl << endl;
	}
	break;

	case 80:
	{
		double x;
		cout << "Введите действительное число" << endl;
		cin >> x;
		double sum = x;
		double f = 1;

		for (int i=3; i<=13; i+=2)
		{
			f = f*(i - 1.0)*i;
			
			if (i % 4 == 1)
				sum = sum + pow(x, i) / f;
			else
				sum = sum - pow(x, i) / f;
		}
		cout << sum << endl << endl;
	}
	break;

	case 83:
	{
		double a;
		cout << "Введите действительное число" << endl;
		cin >> a;
		double sum = 0;
		int n = 1;

		while (sum <= a)
		{
			sum = sum + 1.0 / n;
			n++;
		}
		cout << endl << "первое число из заданной последовательности, большее, чем число A, равно" << endl;
		std::cout << std::setprecision(8) << sum << endl << endl << "при N равном" << endl << n << endl << endl;
	}
	break;
	default:
		cout << "нет такой задачи" << endl << endl;
	}
	goto start;
}