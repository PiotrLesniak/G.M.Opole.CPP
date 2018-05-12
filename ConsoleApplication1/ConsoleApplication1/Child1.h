#pragma once
#include "AbstractClassExample.h"

class Child1 : public AbstractClassExample
{
public:
	Child1();
	void MyMethod() override;
	~Child1();
};

