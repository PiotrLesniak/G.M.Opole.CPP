#pragma once
class Meter
{
public:
	virtual void Wyswietl() = 0;
	virtual double ObliczPole() = 0;
	Meter(double bok);
	~Meter();
protected: 
	double bok;
};

