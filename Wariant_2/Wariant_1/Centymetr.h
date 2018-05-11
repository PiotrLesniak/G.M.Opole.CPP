#pragma once
#include "Measure.h"


class Centymetr : public Measure
{
public:
	Centymetr(double bok);
	~Centymetr();
	void Show() override;
protected:
	double TransformFromBasicUnit(double basicUnit) override;
	double TransformToBasicUnit() override;
};

