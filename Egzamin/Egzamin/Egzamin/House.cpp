#include "stdafx.h"
#include "House.h"

#include <iostream>

using namespace std;

House::House()
{
	Number = 0;
	Type = new char('X');
}

House::House(char* type, int number)
{
	this->Type = type;
	this->Number = number;
}

House::House(const House& house) //konstruktor kopiujacy;
{
	this->Type = house.Type;
	this->Number = house.Number;
}

const House& House::operator=(const House & house)
{
	this->Type = new char(*house.Type);
	this->Number = house.Number;
	return *this;
}

void House::SetType(char* type)
{
	this->Type = type;
}

char * House::GetType()
{
	return this->Type;
}

void House::SetNumber(int number)
{
	this->Number = number;
}


int House::GetNmber()
{
	return this->Number;
}

void House::Print()
{
	cout << "Numer: " << Number << endl;
	cout << "Typ: " << *Type << endl;
}

void House::Input()
{
	cout << "Podaj numer: ";
	cin >> Number;
	cout << "Podaj typ: ";
	cin >> Type;
}

House::~House()
{
	delete Type;
}
