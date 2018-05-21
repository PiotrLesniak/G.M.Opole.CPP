#pragma once
#include <fstream>
#include <conio.h> 
#include <math.h>

using namespace std;

class Meter
{
public:
	Meter();
	Meter(double wartosc);

	~Meter();

	virtual void Wyswietl() = 0;
	virtual double ObliczPole() = 0;

	virtual void Save(ofstream& s);
	virtual void Load(ifstream& s);
protected: 
	double wartosc;
};

