#include "stdafx.h"
#include "Maszyna.h"
#include <iostream>

using namespace std;

Maszyna::Maszyna()
{
	this->moc = new float(0);
	this->kalibraz = new unsigned short(0);
	this->licznik = new unsigned int(0);
	this->rok = new short(0);
	this->numer = new int(0);

}
Maszyna::Maszyna(unsigned short _kalibraz, float _moc, short _rok, unsigned int _licznik, int _numer)
{
	this->moc = new float(_moc);
	this->kalibraz = new unsigned short(_kalibraz);
	this->licznik = new unsigned int(_licznik);
	this->rok = new short(_rok);
	this->numer = new int(_numer);

}

Maszyna::Maszyna(const Maszyna & kopia)
{
	this->moc = kopia.moc;
	this->kalibraz = kopia.kalibraz;
	this->licznik = kopia.licznik;
	this->rok = kopia.rok;
	this->numer = kopia.numer;
}

const Maszyna & Maszyna::operator = (const Maszyna &maszynaRef)
{
	kalibraz = maszynaRef.kalibraz;

	return *this;
}


Maszyna::~Maszyna()
{
}

void Maszyna::setRok(short _rok)
{
	this->rok = new short(_rok);
}

void Maszyna::setLicznik(unsigned int _licznik)
{
	this->licznik = new unsigned int(_licznik);
}
void Maszyna::setMoc(float _moc)
{
	this->moc = new float(_moc);
}
void Maszyna::setKalibraz(unsigned short _kalibraz)
{
	this->kalibraz = new unsigned short(_kalibraz);
}
void Maszyna::setNumer(int _numer)
{
	this->numer = new int(_numer);
}


short Maszyna::getRok()
{
	return *rok;
}

unsigned int Maszyna::getLicznik()
{
	return *licznik;
}
float Maszyna::getMoc()
{
	return *moc;
}
unsigned short Maszyna::getKalibraz()
{
	return *kalibraz;
}
int Maszyna::getNumer()
{
	return *numer;
}


void Maszyna::wyswietlInformacje()
{
	cout << "Dane maszyny: " << endl;
	wyswitlInformacjeBazowe();
}

void Maszyna::wprowadzInformacje()
{
	cout << "Wprowadz dane maszyny: " << endl;
	wprowadzInformacjeBazowe();
	cout << endl;
	system("cls");

}

void Maszyna::wyswitlInformacjeBazowe()
{
	cout << "Kalibraz: " << *kalibraz << endl;
	cout << "Moc (KM): " << *moc << endl;
	cout << "Rok: " << *rok << endl;
	cout << "Licznik: " << *licznik << endl;
	cout << "Numer: " << *numer << endl;
}

void Maszyna::wprowadzInformacjeBazowe()
{
	cout << "Kalibraz: "; cin >> *kalibraz;
	cout << "Moc (KM): "; cin >> *moc;
	cout << "Rok: "; cin >> *rok;
	cout << "Licznik: "; cin >> *licznik;
	cout << "Numer: "; cin >> *numer;
}
