#pragma once
#include "AbstractClassExample.h"

class Child2 : public AbstractClassExample
{
public:
	Child2();
	~Child2();
	void MyMethod() override;
};

