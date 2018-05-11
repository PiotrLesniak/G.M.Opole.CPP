#pragma once
#include "Measure.h"


class Decymetr : public Measure
{
public:
	Decymetr(double bok);
	~Decymetr();
	void Show() override;
protected:
	double TransformFromBasicUnit(double basicUnit) override;
	double TransformToBasicUnit() override;

};

