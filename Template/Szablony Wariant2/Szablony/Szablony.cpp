// Szablony.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int dodawanie(int a, int b)
{
	return a + b;
}
int mnozenie(int a, int b)
{
	return a * b;
}

double dodawanie(double a, double b)
{
	return a + b;
}
double mnozenie(double a, double b)
{
	return a * b;
}

//http://cpp0x.pl/kursy/Kurs-C++/Poziom-X/Wskaznik-na-funkcje/249
template<typename T> T* operacjaNatablicy(int wielkoscTablicy = 10, T K = 1, T(*dzialanie)(T, T) = dodawanie)
{ 
	T* tablica = new T[wielkoscTablicy];
	//tworzymy tablice
	for (int i = 0; i < wielkoscTablicy; i++)
	{
		tablica[i] = (T)(i+1);
	}
	//wykonujemy operacje na tablicy
	for (int i = 0; i < wielkoscTablicy; i++)
	{
		tablica[i] = dzialanie(tablica[i],K);
	}
	return tablica;
}


template<typename T> void printArray(T* arrayOfT, int lenght)
{
	cout << "[";
	for (int i = 0; i<lenght; i++)
		cout << arrayOfT[i] << " ";	
	cout << "]";
}

int main()
{
	cout << "-= Test dla typu int =-" << endl << endl;

	int lenght;
	int Kint;
	cout << "podaj wielkosc tablicy: ";
	cin >> lenght;
	
	cout << "podaj wartoœæ elementu K typu int: ";
	cin >> Kint;

	cout << "tablica + K = " << endl;
	int* tabl = operacjaNatablicy(lenght, Kint, dodawanie);
	cout << "wynik to: " << endl;
	printArray(tabl, lenght);
	
	cout << endl;
	cout << "tablica * K = " << endl;
	tabl = operacjaNatablicy(lenght, Kint, mnozenie);
	cout << "wynik to: " << endl;
	printArray(tabl, 10);


	cout << endl << endl <<  "-= Test dla typu double =-" << endl << endl;
	double Kdouble;
	cout << "podaj wielkosc tablicy: ";
	cin >> lenght;

	cout << "podaj wartoœæ elementu K typu double: ";
	cin >> Kdouble;

	cout << "tablica + K = " << endl;
	double* tablDouble = operacjaNatablicy(lenght, Kdouble, dodawanie);
	cout << "wynik to: " << endl;
	printArray(tablDouble, lenght);

	cout << endl;
	cout << "tablica * K = " << endl;
	tablDouble = operacjaNatablicy(lenght, Kdouble, mnozenie);
	cout << "wynik to: " << endl;
	printArray(tablDouble, lenght);
	
	cout << "-= Test dla wywolania parametrow domyslnych =-" << endl << endl;
	tabl = operacjaNatablicy<int>();
	cout << "wynik to: " << endl;
	printArray(tabl, 10);

	system("pause");
	return 0;
}

