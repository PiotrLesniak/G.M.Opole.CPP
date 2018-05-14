// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Maszyna.h"
#include "Koparka.h"
#include <iostream>

using namespace std;

int main()
{
	Maszyna* maszyna;
	
	bool dziala = true;
	char rodzaj;
	char czyKontynuowac;
	while (dziala)
	{
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

