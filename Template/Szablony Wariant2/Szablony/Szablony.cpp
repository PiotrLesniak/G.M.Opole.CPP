// Szablony.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//pasuje do wskaznika int(*dzialanie)(int, int)
int dodawanie(int a, int b)
{
	return a + b;
}
//pasuje do wskaznika int(*dzialanie)(int, int)
int mnozenie(int a, int b)
{
	return a * b;
}
//pasuje do wskaznika double(*dzialanie)(double, double)
double dodawanie(double a, double b)
{
	return a + b;
}
//pasuje do wskaznika double(*dzialanie)(double, double)
double mnozenie(double a, double b)
{
	return a * b;
}

//http://cpp0x.pl/kursy/Kurs-C++/Poziom-X/Wskaznik-na-funkcje/249
/*
funkcja tworzy tablice o zadanej wielkosci (parametr wielkoscTablicy)
nasepnie uzuep≥nia ja elementami rosnacymi co 1 zaczynajac od wartosci 1 
czyli np. 1, 2, 3..
w ostatnim kroku wykonuje na elementach tablicy zadenej operacji z uzyciem elemenu K

T(*dzialanie)(T, T) = dodawanie - jest to wskaünik na funkcje
(z uzyciem zmiennej z template T). Domysknie funkcja dodawanie
*/
template<typename T> T* operacjaNatablicy(int wielkoscTablicy = 10, T K = 1, T(*dzialanie)(T, T) = dodawanie)
{ 
	//tworzymy tablice
	T* tablica = new T[wielkoscTablicy];
	//uzupe≥niamy tablice
	for (int i = 0; i < wielkoscTablicy; i++)
	{
		tablica[i] = (T)(i+1);
	}
	//wykonujemy operacje na tablicy
	for (int i = 0; i < wielkoscTablicy; i++)
	{
		tablica[i] = dzialanie(tablica[i],K);
	}
	//zwracamy wsazik do tablicy
	return tablica;
}

//funckaj template - pomocnicza do wypiswania elementow tablicy
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
	
	cout << "podaj wartoúÊ elementu K typu int: ";
	cin >> Kint;

	cout << "tablica + K = " << endl;
	//w template podajmy Kint z tad kompilator wie ze T = int
	//dlatego jako ostatni parametr mamy wygenerowany wskaznik - int(*dzialanie)(int, int)
	//patametr dodawanie - jest to wiec funkcja int dodawanie(int a, int b)
	
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

	cout << "podaj wartoúÊ elementu K typu double: ";
	cin >> Kdouble;

	cout << "tablica + K = " << endl;
	//w template podajmy Kdouble (typu double) z tad kompilator wie ze T = double
	//dlatego jako ostatni parametr mamy wygenerowany wskaznik - double(*dzialanie)(double, double)
	//patametrem dodawanie - jest to wiec funkcja int dodawanie(int a, int b)

	double* tablDouble = operacjaNatablicy(lenght, Kdouble, dodawanie);
	cout << "wynik to: " << endl;
	printArray(tablDouble, lenght);

	cout << endl;
	cout << "tablica * K = " << endl;
	tablDouble = operacjaNatablicy(lenght, Kdouble, mnozenie);
	cout << "wynik to: " << endl;
	printArray(tablDouble, lenght);
	

	cout << "-= Test dla wywolania parametrow domyslnych =-" << endl << endl;
	/*wszystkie paramtetry naszej funkcji maja parametry domyslne 
	wiek comzemy wywolac ta funkcje bez parametrow.
	Jeøeli jednak nie podajmy elemenu K to kompilator nie ma moøliwoúci 
	dopasowania odpowiedniego typu za T.
	Musimy wiec mu jawnie wskazaÊ jaki typ bedzie uzyty za T
	poprzez podanie za nazwa funkcji np. <int>
	*/
	tabl = operacjaNatablicy<int>();
	cout << "wynik to: " << endl;
	printArray(tabl, 10);

	system("pause");
	return 0;
}

