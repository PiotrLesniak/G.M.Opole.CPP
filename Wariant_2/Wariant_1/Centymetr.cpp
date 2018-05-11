#include "stdafx.h"
#include "Centymetr.h"
#include <iostream>

using namespace std;

Centymetr::Centymetr(double bok) : Measure(bok)
{

}


Centymetr::~Centymetr()
{
}

void Centymetr::Show()
{
	cout << ObliczPole() << " cm" << endl;
}

double Centymetr::TransformFromBasicUnit(double basicUnit)
{
	return basicUnit*100;
}

double Centymetr::TransformToBasicUnit()
{
	return this -> bok/100;
}
