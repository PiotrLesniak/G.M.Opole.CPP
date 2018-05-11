#pragma once
class Measure
{
public:
	Measure(double bok);
	~Measure();
	virtual void Show() = 0;
	virtual double ObliczPole();

	virtual double TransformFrom(Measure* measure);


protected:
	virtual double TransformFromBasicUnit(double basicUnit) = 0;
	virtual double TransformToBasicUnit() = 0;

	double bok;

};

