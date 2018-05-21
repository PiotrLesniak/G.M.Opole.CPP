// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Maszyna.h"
#include "Koparka.h"
#include "BazaDanych.h"

#include <iostream>

using namespace std;

Maszyna* stworzMaszyne()
{
	char rodzaj;
	Maszyna* maszyna;
	cout << "kopartka - k" << endl << " maszyna - m" << endl;
	cin >> rodzaj;
	if (rodzaj == 'k')
	{
		maszyna = new Koparka();
	}
	else {
		maszyna = new Maszyna();
	}
	system("cls");
	maszyna->wprowadzInformacje();
	system("cls");
	maszyna->wyswietlInformacje();

	return maszyna;
}

int main()
{
	BazaDanych *bazadanych = new BazaDanych();
	bazadanych->zapisz("test1.txt");
	
	Maszyna *m = stworzMaszyne();
	bazadanych->dodajMaszyne(m);

	m = stworzMaszyne();
	bazadanych->dodajMaszyne(m);
	bazadanych->zapisz("test1.txt");


	Maszyna* maszyna;
	
	bool dziala = true;
	
	char czyKontynuowac;
	while (dziala)
	{
		

		cout << "czy kontynuowac (t/n)";
		cin >> czyKontynuowac;
		if (czyKontynuowac == 'n')
		{
			dziala = false;
		}
		else {
			system("cls");
		}

	}

	
	
	return 0;
}

