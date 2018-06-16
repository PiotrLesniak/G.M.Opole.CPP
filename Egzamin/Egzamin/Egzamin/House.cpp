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
	this->Type = house.Type;
	this->Number = house.Number;
	return *this;
}

void House::SetType(char *)
{
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
	cout << "Podaj numer: ";
	cin >> Number;
	cout << "Podaj typ: ";
	cin >> Type;
}

void House::Input()
{
	cout << "Numer: " << Number;
	cout << "Typ" << *Type;
}

House::~House()
{
	delete Type;
}
