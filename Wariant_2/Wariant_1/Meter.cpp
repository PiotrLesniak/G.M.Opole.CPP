#include "stdafx.h"
#include "Meter.h"
#include <iostream>

using namespace std;
Meter::Meter(double bok) : Measure(bok)
{

}

Meter::~Meter()
{

}

void Meter::Show()
{
	cout << ObliczPole() << " m" << endl;
}


double Meter::TransformFromBasicUnit(double basicUnit)
{
	return basicUnit;
}

double Meter::TransformToBasicUnit()
{
	return this->bok;
}

