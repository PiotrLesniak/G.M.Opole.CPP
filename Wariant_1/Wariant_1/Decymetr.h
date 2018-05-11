#pragma once
#include "Meter.h"


class Decymetr : public Meter
{
public:
	Decymetr(double bok);
	~Decymetr();
	void Wyswietl() override;
	double ObliczPole() override;

};

