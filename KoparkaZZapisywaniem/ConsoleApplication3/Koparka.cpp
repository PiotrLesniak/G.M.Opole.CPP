#include "stdafx.h"
#include "Koparka.h"
#include <iostream>

using namespace std;


Koparka::Koparka()
{
	this->nazwa = new string("");
}

Koparka::Koparka(unsigned short _kalibraz, float _moc, short _rok, unsigned int _licznik, int _numer, string _nazwa)
	: Maszyna(_kalibraz, _moc, _rok, _licznik, _numer)
{
	this -> nazwa = &_nazwa;
}

Koparka::~Koparka()
{
}

void Koparka::setNazwa(string _nazwa)
{
	this->nazwa = new string(_nazwa);
}
void Koparka::setModel(string _model)
{
	this->model = new string(_model);
}

string Koparka::getModel()
{
	return *model;
}
void Koparka::wyswietlInformacje()
{
	cout << "Dane koparki: " << endl;
	cout << "Nazwa: " << *nazwa << endl;
	Maszyna::wyswitlInformacjeBazowe();
}
void Koparka::wprowadzInformacje()
{
	cout << "Wprowadz dane koparki: " << endl;
	cout << "Nazwa: "; cin >> *nazwa;
	wprowadzInformacjeBazowe();
	cout << endl;
	system("cls");
}

void Koparka::zapisz(ofstream & strumienZapisuPliku)
{
	strumienZapisuPliku << 2 << endl;
	strumienZapisuPliku << *nazwa << endl;
	Maszyna::zapiszInformacjeBazowe(strumienZapisuPliku);
}

void Koparka::wczytaj(ifstream & strumienOdczytuPliku)
{
	strumienOdczytuPliku >> *nazwa;
	Maszyna::wczytaj(strumienOdczytuPliku);
}

void Koparka::wypiszWLinii()
{
	Maszyna::wypiszWLinii("Koparka");
	cout << *nazwa ;
}

bool Koparka::czyZawiera(string wartosc)
{
	return Maszyna::czyZawiera(wartosc)
		|| czyZawieraFrazeWZmiennej(*nazwa, wartosc);
}





string Koparka::getNazwa()
{
	return *nazwa;
}

