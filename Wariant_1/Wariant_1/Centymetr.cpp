#include "stdafx.h"
#include "Centymetr.h"
#include <iostream>

using namespace std;

Centymetr::Centymetr(double bok) : Meter(bok)
{
}


Centymetr::~Centymetr()
{
}

void Centymetr::Wyswietl()
{
	cout << ObliczPole() << " cm" << endl;
}

double Centymetr::ObliczPole()
{
	return this->bok * this->bok;
}
