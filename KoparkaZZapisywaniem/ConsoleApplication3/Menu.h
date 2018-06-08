#pragma once
#include "BazaDanych.h"
#include "Maszyna.h"
#include "Koparka.h"
#include <iostream>

using namespace std;

class Menu
{
public:
	Menu(BazaDanych *bazadanych);
	~Menu();
	int UruchomMenu();
	void Odczytaj();
	void Zapisz();
	void DodajMaszyne();
	void UsunMaszyne();
	void Wypisz();
	void Znajdz();

private: 
	Maszyna* StworzMaszyne();
	BazaDanych *bazadanych;
	void WypiszWybranaFunkcje(string nazwaFunckji);
};

