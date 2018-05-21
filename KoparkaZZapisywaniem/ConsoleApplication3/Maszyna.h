#pragma once
#include <fstream>
#include <conio.h> 
#include <math.h>

using namespace std;

class Maszyna
{
	short * rok;
	unsigned int * licznik;
	float * moc;
	unsigned short * kalibraz;
	int  * numer;

public:
	Maszyna();
	Maszyna(unsigned short _kalibraz, float _moc, short _rok, unsigned int _licznik, int _numer);
	Maszyna(const Maszyna &);
	const Maszyna & operator = (const Maszyna &koparkaRef);
	~Maszyna();

	void setRok(short);
	void setLicznik(unsigned int);
	void setMoc(float);
	void setKalibraz(unsigned short);
	void setNumer(int);

	short getRok();
	int getNumer();
	unsigned int getLicznik();
	float getMoc();
	unsigned short getKalibraz();

	virtual void wyswietlInformacje();
	virtual void wprowadzInformacje();

	virtual void zapisz(ofstream & strumienZapisuPliku);


protected: 
	void wyswitlInformacjeBazowe();
	void wprowadzInformacjeBazowe();
	
	void zapiszInformacjeBazowe(ofstream & strumienZapisuPliku);

};


