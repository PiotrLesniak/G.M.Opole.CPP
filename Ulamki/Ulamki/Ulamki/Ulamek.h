#pragma once
#include <iostream>


using namespace std;

class Ulamek
{
	int licznik;
	int mianownik;
public:
	Ulamek redukcja();
	Ulamek();
	Ulamek(int _licznik, int _mianownik);
	void setLicznik(int);
	int getLicznik() const;
	void setMianownik(int);
	int getMianownik() const;
	void Print()const;
	friend std::ostream & operator <<(ostream & s, const Ulamek & _a);
	friend std::istream & operator >> (istream & s, Ulamek & _a);

	const Ulamek operator +=(const Ulamek & _a);
	const Ulamek operator +=(const int & _a);
	const Ulamek operator -();
	const Ulamek operator -=(const Ulamek & _a);
	const Ulamek operator -=(const int & _a);
	const Ulamek operator *=(const Ulamek & _a);
	const Ulamek operator *=(const int & _a);
	const Ulamek operator /=(const Ulamek & _a);
	const Ulamek operator /=(const int & _a);

	friend bool operator ==(const Ulamek& _a, const Ulamek & _b);
	friend bool operator !=(const Ulamek& _a, const Ulamek & _b);
	friend bool operator <=(const Ulamek& _a, const Ulamek & _b);
	friend bool operator <(const Ulamek& _a, const Ulamek & _b);
	friend bool operator >=(const Ulamek& _a, const Ulamek & _b);
	friend bool operator >(const Ulamek& _a, const Ulamek & _b);
	Ulamek operator ++(int);
	Ulamek& operator++();
	Ulamek operator --(int);
	Ulamek& operator--();

	~Ulamek();
};

const Ulamek operator +(const Ulamek & _a, const Ulamek & _b);
const Ulamek operator +(const Ulamek & _a, const int & _b);
const Ulamek operator +(const int & _b, const Ulamek & _a);

const Ulamek operator -(const Ulamek & _a, const Ulamek & _b);
const Ulamek operator -(const Ulamek & _a, const int & _b);
const Ulamek operator -(const int & _b, const Ulamek & _a);

const Ulamek operator *(const Ulamek& _a, const Ulamek & _b);
const Ulamek operator *(const Ulamek& _a, const int & _b);
const Ulamek operator *(const int & _b, const Ulamek& _a);

const Ulamek operator /(const Ulamek& _a, const Ulamek & _b);
const Ulamek operator /(const Ulamek& _a, const int & _b);
const Ulamek operator /(const int & _b, const Ulamek& _a);



