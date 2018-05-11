#include "stdafx.h"
#include "Decymetr.h"

#include "stdafx.h"
#include "Decymetr.h"
#include <iostream>

using namespace std;

Decymetr::Decymetr(double bok) : Measure(bok)
{
}


Decymetr::~Decymetr()
{
}

void Decymetr::Show()
{
	cout << ObliczPole() << " dm" << endl;
}

double Decymetr::TransformFromBasicUnit(double basicUnit)
{
	return basicUnit * 10;
}

double Decymetr::TransformToBasicUnit()
{
	return this->bok / 10;
}
