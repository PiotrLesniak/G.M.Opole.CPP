// Wariant_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Centymetr.h"
#include "Meter.h"
#include <iostream>

#include <cstdlib>
#include <ctime>
#include "Decymetr.h"

using namespace std;

int losuj(int max)
{
	if (max <= 0)
	{
		return 0;
	}
	
	if (max == 2)
	{
		return rand() % 2 + 1;
	}
	
	return rand() % (max-1) + 1;
}

int main()
{
	srand(static_cast <unsigned int> (time(0)));

	Meter* m = new Centymetr(3);
	Centymetr* c = new Centymetr(3);
	
	Meter* miary[10];
	
	for (int i = 0; i < 10; i++)
	{
		int typ = losuj(2);
		if (typ == 1)
		{
			miary[i] = new Centymetr(losuj(1000));
		}
		else
		{
			miary[i] = new Decymetr(losuj(1000));
		}
		 
	}

	for (int i = 0; i < 10; i++)
	{
		miary[i]->Wyswietl();
	}

	


	
	char x;
	cin >> x;
	return 0;
}

