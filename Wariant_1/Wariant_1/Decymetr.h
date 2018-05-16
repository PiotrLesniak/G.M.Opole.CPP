#pragma once
#include "Meter.h"


class Decymetr : public Meter
{
public:
	Decymetr();
	Decymetr(double wartosc);
	~Decymetr();
	void Wyswietl() override;
	double ObliczPole() override;
	virtual void Save(ofstream& s) override;

};

