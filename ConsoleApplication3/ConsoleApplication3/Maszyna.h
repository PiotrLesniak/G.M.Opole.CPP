#pragma once
class Maszyna
{
	short * rok;
	unsigned int * licznik;
	float * moc;
	unsigned short * kalibraz;
	int  * numer;

public:
	Maszyna();
	Maszyna(unsigned short, float, short, unsigned int, int);
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

	void wyswietlInformacje(int);
	void wprowadzInformacje();
};

