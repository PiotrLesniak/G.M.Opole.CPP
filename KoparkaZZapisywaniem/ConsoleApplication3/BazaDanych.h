#pragma once
#include <fstream>
#include <conio.h> 
#include <math.h>
#include "Maszyna.h"
#include "Koparka.h"

using namespace std;

class BazaDanych
{
public:
	BazaDanych();
	
	void zapisz(string nazwaPliku);
	void wczytaj(string nazwaPliku);
	void dodajMaszyne(Maszyna* maszyna);
	void usunMaszyne(int index);
	Maszyna* getMaszyna(int index);
	int getIloscMaszyn();
private:
	Maszyna ** tablicaMaszyn;//wskaznik ktoru pokazuje na tablice wskaniznikow, ktore pokazuja na odpowiednie maszyny
	int wielkoscTablicy;
	int iloscMaszyn;

	Maszyna * wybranaMaszyna;
	void powiekszTabliceMaszyn();
	void usunTabliceMaszyn();

	~BazaDanych();
};

