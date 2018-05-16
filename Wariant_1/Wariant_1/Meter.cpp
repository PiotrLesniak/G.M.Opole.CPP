#include "stdafx.h"
#include "Meter.h"
#include <iostream>

#include <fstream>
#include <conio.h>
#include <math.h>

using namespace std;

Meter::Meter(double wartosc)
{
	this->wartosc = wartosc;
}

Meter::Meter()
{
	this->wartosc = 0;
}


Meter::~Meter()
{

}

void Meter::Save(ofstream & s)
{
	s << wartosc << endl;
}

void Meter::Load(ifstream & s)
{
	s >> wartosc;
}


