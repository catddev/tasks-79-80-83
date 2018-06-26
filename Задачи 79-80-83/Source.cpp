#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <iostream>

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
		
	}
	break;
	case 80:
	{

	}
	break;
	case 83:
	{

	}
	break;
	default:
		cout << "нет такой задачи" << endl;
	}
	goto start;
}