
#include "stdafx.h"
#include "Ulamek.h"
#include <iostream>
using namespace std;


Ulamek Ulamek::redukcja()
{
	bool ujemna = false;
	if (this->licznik == 0)
	{
		this->licznik = 0;
		this->mianownik = 0;
		return *this;
	}
	if (this->licznik < 0)
	{
		ujemna = true;
		this->licznik *= -1;
	}
	bool koniec = true;
	while (koniec)
	{

		if (this->licznik == 1)
			koniec = false;
		for (int i = 2; i <= this->licznik; i++)
		{
			if (i == this->licznik)
			{
				koniec = false;
			}
			if (this->licznik % i == 0 && this->mianownik % i == 0)
			{
				this->licznik /= i;
				this->mianownik /= i;
				break;
			}
		}
	}
	if (ujemna)
	{
		this->licznik *= -1;
		return *this;
	}
	else
		return *this;

}


Ulamek::Ulamek()
{
	this->licznik = 1;
	this->mianownik = 1;
}
Ulamek::Ulamek(int _licznik, int _mianownik)
{
	this->licznik = _licznik;
	this->mianownik = _mianownik;
}
void Ulamek::setLicznik(int _licznik)
{
	this->licznik = _licznik;
}
int Ulamek::getLicznik() const
{
	return this->licznik;
}
void Ulamek::setMianownik(int _mianownik)
{
	this->mianownik = _mianownik;
}
int Ulamek::getMianownik() const
{
	return this->mianownik;
}
std::ostream & operator <<(std::ostream & s, const Ulamek & _a)
{
	Ulamek rez = _a;
	rez.redukcja();
	return s << rez.licznik << "/" << rez.mianownik;
}
std::istream & operator >> (std::istream & s, Ulamek & _a)
{
	s >> _a.licznik >> _a.mianownik;
	return s;
}
const Ulamek operator +(const Ulamek & _a, const Ulamek & _b)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik() * _b.getMianownik() + _b.getLicznik() * _a.getMianownik());
	rez.setMianownik(_a.getMianownik() * _b.getMianownik());
	rez.redukcja();
	return rez;
}
const Ulamek operator +(const Ulamek & _a, const int & _b)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik() + _b * _a.getMianownik());
	rez.setMianownik(_a.getMianownik());
	rez.redukcja();
	return rez;
}
const Ulamek operator +(const int & _b, const Ulamek & _a)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik() + _b * _a.getMianownik());
	rez.setMianownik(_a.getMianownik());
	rez.redukcja();
	return rez;
}
const Ulamek Ulamek::operator+=(const Ulamek & _a)
{
	this->licznik = this->licznik * _a.mianownik + _a.licznik + _a.licznik * this->mianownik;
	this->mianownik = this->mianownik * _a.mianownik;
	this->redukcja();
	return *this;
}
const Ulamek Ulamek::operator+=(const int & _a)
{
	this->licznik = this->licznik + _a * this->mianownik;
	this->redukcja();
	return *this;
}
const Ulamek Ulamek::operator-()
{
	this->licznik = 0 - this->licznik;
	this->redukcja();
	return *this;
}
const Ulamek operator -(const Ulamek & _a, const Ulamek & _b)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik() * _b.getMianownik() - _b.getLicznik() * _a.getMianownik());
	rez.setMianownik(_a.getMianownik() * _b.getMianownik());
	rez.redukcja();
	return rez;
}
const Ulamek operator -(const Ulamek & _a, const int & _b)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik() - _b * _a.getMianownik());
	rez.setMianownik(_a.getMianownik());
	rez.redukcja();
	return rez;
}
const Ulamek operator -(const int & _b, const Ulamek & _a)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik() - _b * _a.getMianownik());
	rez.setMianownik(_a.getMianownik());
	rez.redukcja();
	return rez;
}
const Ulamek Ulamek::operator-=(const Ulamek & _a)
{
	this->licznik = this->licznik * _a.mianownik - _a.licznik * this->mianownik;
	this->mianownik = this->mianownik * _a.mianownik;
	this->redukcja();
	return *this;
}
const Ulamek Ulamek::operator-=(const int & _a)
{
	this->licznik = this->licznik - _a * this->mianownik;
	this->redukcja();
	return *this;
}
const Ulamek operator *(const Ulamek& _a, const Ulamek & _b)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik() * _b.getLicznik());
	rez.setMianownik(_a.getMianownik() * _b.getMianownik());
	rez.redukcja();
	return rez;
}
const Ulamek operator *(const Ulamek& _a, const int & _b)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik() * _b);
	rez.setMianownik(_a.getMianownik());
	rez.redukcja();
	return rez;
}
const Ulamek operator *(const int & _b, const Ulamek& _a)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik() * _b);
	rez.setMianownik(_a.getMianownik());
	rez.redukcja();
	return rez;
}
const Ulamek Ulamek::operator *=(const Ulamek & _b)
{
	this->licznik *= _b.licznik;
	this->mianownik *= _b.mianownik;
	this->redukcja();
	return *this;
}
const Ulamek Ulamek::operator *=(const int & _a)
{
	this->licznik *= _a;
	this->redukcja();
	return *this;
}
const Ulamek operator /(const Ulamek& _a, const Ulamek & _b)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik() * _b.getMianownik());
	rez.setMianownik(_a.getMianownik() * _b.getLicznik());
	rez.redukcja();
	return rez;
}
const Ulamek operator /(const Ulamek& _a, const int & _b)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik());
	rez.setMianownik(_a.getMianownik() * _b);
	rez.redukcja();
	return rez;
}
const Ulamek operator /(const int & _b, const Ulamek& _a)
{
	Ulamek rez;
	rez.setLicznik(_a.getLicznik());
	rez.setMianownik(_a.getMianownik() * _b);
	rez.redukcja();
	return rez;
}
const Ulamek Ulamek::operator /=(const Ulamek & _a)
{
	this->licznik *= _a.mianownik;
	this->mianownik *= _a.licznik;
	this->redukcja();
	return *this;
}
const Ulamek Ulamek::operator /=(const int & _a)
{
	this->mianownik *= _a;
	this->redukcja();
	return *this;
}
bool operator ==(const Ulamek& _a, const Ulamek & _b)
{
	if (_b.licznik * _a.mianownik == _a.licznik * _b.mianownik)
		return true;
	else
		return false;
}
bool operator !=(const Ulamek& _a, const Ulamek & _b)
{
	if (_b.licznik * _a.mianownik != _a.licznik * _b.mianownik)
		return true;
	else
		return false;
}
bool operator <=(const Ulamek& _a, const Ulamek & _b)
{
	if (_b.licznik * _a.mianownik >= _a.licznik * _b.mianownik)
		return true;
	else
		return false;
}
bool operator <(const Ulamek& _a, const Ulamek & _b)
{
	if (_b.licznik * _a.mianownik > _a.licznik * _b.mianownik)
		return true;
	else
		return false;
}
bool operator >=(const Ulamek& _a, const Ulamek & _b)
{
	if (_b.licznik * _a.mianownik <= _a.licznik * _b.mianownik)
		return true;
	else
		return false;
}
bool operator >(const Ulamek& _a, const Ulamek & _b)
{
	if (_b.licznik * _a.mianownik < _a.licznik * _b.mianownik)
		return true;
	else
		return false;
}
Ulamek Ulamek::operator++(int)
{
	Ulamek temp = *this;
	this->licznik += this->mianownik;
	temp.redukcja();
	return temp;
}
Ulamek& Ulamek::operator++()
{
	this->licznik += this->mianownik;
	this->redukcja();
	return *this;
}
Ulamek Ulamek::operator--(int)
{
	Ulamek temp = *this;
	this->licznik -= this->mianownik;
	temp.redukcja();
	return temp;
}
Ulamek& Ulamek::operator--()
{
	this->licznik -= this->mianownik;
	this->redukcja();
	return *this;
}

void Ulamek::Print()const
{
	cout << licznik << "/" << mianownik;

}

Ulamek::~Ulamek()
{
}
