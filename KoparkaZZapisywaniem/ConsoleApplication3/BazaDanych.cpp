#include "stdafx.h"
#include "BazaDanych.h"


BazaDanych::BazaDanych()
{
	this->iloscMaszyn = 0;
	this->wielkoscTablicy = 10;
	this->tablicaMaszyn = new Maszyna*[this->wielkoscTablicy];
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

void BazaDanych::wczytaj(string nazwaPliku)
{
	ifstream strumienPlikuDoOdczytu;
	strumienPlikuDoOdczytu.open(nazwaPliku);
	
	delete this->tablicaMaszyn;

	strumienPlikuDoOdczytu >> this->iloscMaszyn;
	this->wielkoscTablicy = this->iloscMaszyn + 10;
	this->tablicaMaszyn = new Maszyna*[this->wielkoscTablicy];
	
	for (int i = 0; i < this->iloscMaszyn; i++)
	{
		Maszyna* m = new Maszyna();
		//tu robimy obiekt bo musimy zainicjowac wskaznik
		int typ;
		strumienPlikuDoOdczytu >> typ;
		switch (typ)
		{
		case 1:
			m = new Maszyna();
			break;
		case 2:
			m = new Koparka();
			break;
		}
		m->wczytaj(strumienPlikuDoOdczytu);
		this->tablicaMaszyn[i] = m;
	}
	strumienPlikuDoOdczytu.close();
}

void BazaDanych::dodajMaszyne(Maszyna * maszyna)
{
	if (this->wielkoscTablicy == this->iloscMaszyn)
	{
		this->powiekszTabliceMaszyn();
	}
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

Maszyna * BazaDanych::getMaszyna(int index)
{
	return this->tablicaMaszyn[index];
}

int BazaDanych::getIloscMaszyn()
{
	return this->iloscMaszyn;
}




void BazaDanych::powiekszTabliceMaszyn()
{
	this->wielkoscTablicy = this->iloscMaszyn + 10;
	Maszyna ** pomTablicaMaszyn = new Maszyna*[this->wielkoscTablicy];
	for (int i = 0; i < this->iloscMaszyn; i++)
	{
		pomTablicaMaszyn[i] = this->tablicaMaszyn[i];
	}
	delete this->tablicaMaszyn;
	this->tablicaMaszyn = pomTablicaMaszyn;
}

BazaDanych::~BazaDanych()
{
	delete this->tablicaMaszyn;
}
