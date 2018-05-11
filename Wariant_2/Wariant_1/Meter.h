#pragma once
#include "Measure.h"

class Meter : public Measure
{
public:
	Meter(double bok);
	~Meter();
	void Show() override;
protected:
	double TransformFromBasicUnit(double basicUnit) override;
	double TransformToBasicUnit() override;
};

