#include "stdafx.h"
#include "BazaDanych.h"


BazaDanych::BazaDanych()
{
	this->iloscMaszyn = 0;
	this->tablicaMaszyn = new Maszyna*[10];
}

void BazaDanych::zapisz(string nazwaPliku)
{
	ofstream strumienPlikuDoZapisu;
	strumienPlikuDoZapisu.open(nazwaPliku);
	
	strumienPlikuDoZapisu << iloscMaszyn << endl;

	for (int i = 0; i < iloscMaszyn; i++)
	{
		Maszyna *m = tablicaMaszyn[i];
		m->zapisz(strumienPlikuDoZapisu);
	}

	strumienPlikuDoZapisu.close();
}

void BazaDanych::dodajMaszyne(Maszyna * maszyna)
{
	tablicaMaszyn[iloscMaszyn] = maszyna;
	this->iloscMaszyn++;
}

void BazaDanych::usunMaszyne(int index)
{
	if (index > iloscMaszyn - 1)
	{
		return;
	}

	delete tablicaMaszyn[index];
	for (int i = index; i < iloscMaszyn-1; i++)
	{
		tablicaMaszyn[i] = tablicaMaszyn[i + 1];
	}
	this->iloscMaszyn--;
	tablicaMaszyn[iloscMaszyn] = 0;
}



BazaDanych::~BazaDanych()
{
	delete this->tablicaMaszyn;
}
