/*******************************************************************************
*
* Copyright (C) 2019 TUSUR, FB, Mironov Danila
*
* File              : main.cpp
* Compiler          : Keil
* Version           : 1.0
* Created File      : 26.02.2019
* Last modified     : 11.03.2019
*
* Support mail      : 
* Target MCU        : MCU: Milandr 1986BE9x
*
* Description       : Porogovaya filtracia
*
********************************************************************************/
#include <iostream>

using namespace std;

int main()
{
	float signal[100];
	float tempArray[100];
	float h = 65.0f;


	for (int i = 0; i <= 100; i++)
	{
		signal[i] = rand() % 100;
		if (signal[i] > h)
		{
			tempArray[i] = 1;
		}
		else
		{
			tempArray[i] = 0;
		}
		cout << tempArray[i] << endl;
		//cout << endl;
	}
	/*for (int i = 0; i <= 100; i++)
	{
		cout << "Signal " << signal[i] << endl;
	}*/
	system("pause");
	return 0;
}