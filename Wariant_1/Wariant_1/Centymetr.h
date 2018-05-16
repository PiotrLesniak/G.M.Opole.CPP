#pragma once
#include "Meter.h"



class Centymetr : public Meter
{
public:
	Centymetr();
	Centymetr(double wartosc);
	~Centymetr();
	void Wyswietl() override;
	double ObliczPole() override;
	virtual void Save(ofstream& s) override;
};

