#pragma once
#include "Maszyna.h"
#include <string>


using namespace std;


class Koparka : public Maszyna
{
	string *nazwa, *model;

public:
	Koparka();
	Koparka(unsigned short _kalibraz, float _moc, short _rok, unsigned int _licznik, int _numer, string nazwa);
	~Koparka();

	void setNazwa(string);
	void setModel(string);
	
	string getNazwa();
	string getModel();

	virtual void wyswietlInformacje() override;
	virtual void wprowadzInformacje() override;
	virtual void zapisz(ofstream & strumienZapisuPliku) override;
	virtual void wczytaj(ifstream & strumienOdczytuPliku) override;
	virtual void wypiszWLinii() override;
	virtual bool czyZawiera(string wartosc) override;
};

