#include "stdafx.h"
#include "Decymetr.h"

#include "stdafx.h"
#include "Decymetr.h"
#include <iostream>

using namespace std;

Decymetr::Decymetr()
{
}

Decymetr::Decymetr(double wartosc) : Meter(wartosc)
{
}


Decymetr::~Decymetr()
{
}

void Decymetr::Wyswietl()
{
	cout << "Wartosc: " << this->wartosc << " dm, Pole: " << ObliczPole() << " dm^2" << endl;

}

double Decymetr::ObliczPole()
{
	return this->wartosc * this->wartosc;
}

void Decymetr::Save(ofstream & s)
{
	s << 2 << endl;
	Meter::Save(s);
}
