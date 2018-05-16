#include "stdafx.h"
#include "Centymetr.h"
#include <iostream>

using namespace std;

Centymetr::Centymetr(double wartosc) : Meter(wartosc)
{
}

Centymetr::Centymetr()
{

}

Centymetr::~Centymetr()
{
}

void Centymetr::Wyswietl()
{
	cout << "Wartosc: " << this->wartosc << " cm, Pole: " << ObliczPole() << " cm^2" << endl;
}

double Centymetr::ObliczPole()
{
	return this->wartosc * this->wartosc;
}

void Centymetr::Save(ofstream & s)
{
	s << 1 << endl;
	Meter::Save(s);
}
