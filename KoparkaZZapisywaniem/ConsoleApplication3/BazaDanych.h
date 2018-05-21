#pragma once
#include <fstream>
#include <conio.h> 
#include <math.h>
#include "Maszyna.h"

using namespace std;

class BazaDanych
{
public:
	BazaDanych();
	
	void zapisz(string nazwaPliku);
	void dodajMaszyne(Maszyna* maszyna);
	void usunMaszyne(int index);

private:
	Maszyna ** tablicaMaszyn;
	int iloscMaszyn;
	Maszyna * wybranaMaszyna;

	

	~BazaDanych();
};

