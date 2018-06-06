// Szablon2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
	int* min = new int(0);
	int* max = new int(10);
	Array <int> intArray(min, max);
	cout << "-= Test dla typu int =-" << endl << endl;

	int indexInt;
	cout << "tablica typu int to: " << endl;
	cout << "[" << intArray << "]" << endl;
	cout << "podaj indeks elementu ktory usunac: ";
	cin >> indexInt;
	intArray.removeAt(indexInt);

	cout << "tablica z usunietym elementem o indeksie =  " << indexInt << endl;
	cout << "[" << intArray << "}" << endl;
	cout << endl;

	cin >> indexInt;

    return 0;
}

