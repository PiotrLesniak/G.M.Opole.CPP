#pragma once
#include "Maszyna.h"
#include <string>

using namespace std;


class Koparka : public Maszyna
{
	string *nazwa, *model;
public:
	unsigned short *kalibraz;
public:
	Koparka();
	~Koparka();

	void setNazwa(string);
	void setModel(string);


	string getNazwa();
	string getModel();
};

