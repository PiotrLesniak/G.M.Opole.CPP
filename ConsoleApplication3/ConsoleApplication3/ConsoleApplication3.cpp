// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Maszyna.h"
#include "Koparka.h"
#include <iostream>

using namespace std;

int main()
{
	Maszyna maszyna;
	Koparka koparka;
    
	koparka.setNazwa("nazwa");
	koparka.wyswietlInformacje(2);
	int x = 0;
	cin >> x;
	return 0;
}

