#include "stdafx.h"
#include "Measure.h"

Measure::Measure(double bok)
{
	this->bok = bok;
}

Measure::~Measure()
{
}

double Measure::ObliczPole()
{
	return this->bok * this->bok;
}



 double Measure::TransformFrom(Measure* measure)
{
	double basicUnit = measure ->TransformToBasicUnit();
	return this->TransformFromBasicUnit(basicUnit);
}
