#include "stdafx.h"
#include "Flat.h"

#include <iostream>

using namespace std;

Flat::Flat() : House()
{
	Owner = new char('X');
}

Flat::Flat(char* type, int number, char* owner) :House(type, number)
{
	this->Owner = owner;
}

Flat::Flat(const Flat& flat) : House(flat)
{
	this->Owner = flat.Owner;
}

const Flat & Flat::operator=(const Flat& flat)
{
	House::operator=(flat);
	this->Owner = new char(*flat.Owner);
	return *this;
}

void Flat::SetOwner(char* owner)
{
	this->Owner = owner;
}

char * Flat::GetOwner()
{
	return this->Owner;
}

void Flat::Print()
{
	House::Print();
	cout << "Uzytkownik: " << *Owner << endl;
}

void Flat::Input()
{
	House::Input();
	cout << "Podaj uzytkownika: ";
	cin >> Owner;
}


Flat::~Flat()
{
	House::~House();
	delete Owner;
}
