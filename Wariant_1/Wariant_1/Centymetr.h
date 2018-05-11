#pragma once
#include "Meter.h"

class Centymetr : public Meter
{
public:
	Centymetr(double bok);
	~Centymetr();
	void Wyswietl() override;
	double ObliczPole() override;

};

