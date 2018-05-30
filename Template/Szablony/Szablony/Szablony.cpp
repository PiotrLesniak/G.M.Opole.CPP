// Szablony.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Array.h"
using namespace std;

template<typename T> Array <T> suma(T K, Array <T> tablica)
{ 
	for (int i = 0; i < tablica.size(); i++)
	{
		tablica[i] += K;
	}
	return tablica;
}

template<typename T> Array <T> iloczyn(T K, Array <T> tablica)
{
	for (int i = 0; i < tablica.size(); i++)
	{
		tablica[i] *= K;
	}
	return tablica;
}

int main()
{
	Array <int> intArray(5);
	cout << "-= Test dla typu int =-" << endl << endl;

	//cout << d.size() << " " << d.capacity() << endl;
	
	for (int i = 0; i < 12; ++i)
	{
		intArray.push_back(i + 1);
	}
	int Kint;
	cout << "tablica typu int to: " << endl;
	cout << "[" << intArray << "}" << endl;
	cout << "podaj wartoœæ elementu K typu int: ";
	cin >> Kint;

	cout << "tablica + K = " << endl;
	cout << "[" << suma(Kint, intArray) << "]" << endl;
	cout << endl;
	cout << "tablica * K = " << endl;
	cout << "[" << iloczyn(Kint, intArray) << "]" << endl;
	
	Array <double> doubleArray(5);
	cout << "-= Test dla typu double =-" << endl << endl;
	
	for (int i = 0; i < 12; ++i)
	{
		double zmienna = (double)i + 1.0;
		zmienna += zmienna / 10.0;
		doubleArray.push_back(zmienna);
	}
	double Kdouble;
	cout << "tablica typu int to: " << endl;
	cout << "[" << doubleArray << "}" << endl;
	cout << "podaj wartoœæ elementu K typu double: ";
	cin >> Kdouble;

	cout << "tablica + K = " << endl;
	cout << "[" << suma(Kdouble, doubleArray) << "]" << endl;
	cout << endl;
	cout << "tablica * K = " << endl;
	cout << "[" << iloczyn(Kdouble, doubleArray) << "]" << endl;

	system("pause");
	return 0;
}

