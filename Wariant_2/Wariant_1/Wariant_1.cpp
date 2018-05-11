// Wariant_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Centymetr.h"
#include "Meter.h"
#include "Measure.h"
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
	
	return rand() % (max) + 1;
}

int main()
{
	srand(static_cast <unsigned int> (time(0)));

	Measure* miary[10];
	
	for (int i = 0; i < 10; i++)
	{
		int typ = losuj(3);
		if (typ == 1)
		{
			miary[i] = new Centymetr(losuj(1000));
		}
		else if(typ == 2)
		{
			miary[i] = new Meter(losuj(1000));
		}
		else if (typ == 3)
		{
			miary[i] = new Decymetr(losuj(1000));
		}
	}

	for (int i = 0; i < 10; i++)
	{
		miary[i]->Show();
	}

	Measure* m1 = new Decymetr(5);
	Measure* m2 = new Centymetr(4);
	 double result = m2->TransformFrom(m1);
	 cout << endl << " wynik to: " << result;




	


	
	char x;
	cin >> x;
	return 0;
}

