#pragma once

#include "House.h"

class Flat : public House
{
	char* Owner;
public:
	Flat();
	Flat(char*, int, char*);
	Flat(const Flat&);
	const Flat& operator = (const Flat&);
	void SetOwner(char*);
	char* GetOwner();
	virtual void Print() override;
	virtual void Input() override;
	~Flat();
};

