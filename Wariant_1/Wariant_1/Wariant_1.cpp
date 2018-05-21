// Wariant_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Centymetr.h"
#include "Meter.h"
#include <iostream>

#include <cstdlib>
#include <ctime>
#include "Decymetr.h"

//biblioteki do zapisywania do pliku
#include <fstream>
#include <conio.h>
#include <math.h>


using namespace std;

int losuj(int max)
{
	if (max <= 0)
	{
		return 0;
	}
	
	return rand() % max + 1;
}

void save(string nazwaPliku, Meter* miary[10])
{
	ofstream strumienPlikuDoZapisu;
	strumienPlikuDoZapisu.open(nazwaPliku);
	for (int i = 0; i < 10; i++)
	{
		miary[i]->Save(strumienPlikuDoZapisu);
	}
		
	strumienPlikuDoZapisu.close();
}
void load(string nazwaPliku, Meter* miary[10])
{
	ifstream strumienPlikuDoOdczytu;
	strumienPlikuDoOdczytu.open(nazwaPliku);
	int typ;
	
	for (int i = 0; i < 10; i++)
	{
		strumienPlikuDoOdczytu >> typ;
		if (typ == 1)
		{
			miary[i] = new Centymetr();
		}
		else if (typ == 2)
		{
			miary[i] = new Decymetr();
		}
		miary[i]->Load(strumienPlikuDoOdczytu);
		 
	}
	strumienPlikuDoOdczytu.close();
}

void LosujMiary(Meter* miary[10])
{
	srand(static_cast <unsigned int> (time(0)));
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
}

bool czyPlikIstnieje(string filename)
{
	ifstream ifile(filename);
	return ifile.good();
}

int main()
{
	Meter* miary[10];
	
	//
	string nazwaPliku = "miary.txt";
	if (czyPlikIstnieje(nazwaPliku))
	{
		load(nazwaPliku, miary);
	}
	else
	{
		LosujMiary(miary);
		save(nazwaPliku, miary);
	}

	for (int i = 0; i < 10; i++)
	{
		miary[i]->Wyswietl();
	}

		
	char x;
	cin >> x;
	return 0;
}

