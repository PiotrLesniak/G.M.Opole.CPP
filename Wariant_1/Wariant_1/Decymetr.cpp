#include "stdafx.h"
#include "Decymetr.h"

#include "stdafx.h"
#include "Decymetr.h"
#include <iostream>

using namespace std;

Decymetr::Decymetr(double bok) : Meter(bok)
{
}


Decymetr::~Decymetr()
{
}

void Decymetr::Wyswietl()
{
	cout << ObliczPole() << " dm" << endl;
}

double Decymetr::ObliczPole()
{
	return this->bok * this->bok;
}
