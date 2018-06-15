#include "stdafx.h"
#include "BazaDanych.h"


BazaDanych::BazaDanych()
{
	this->iloscMaszyn = 0;//ilosc maszyn w pamieci - na poczatku zawsze 0
	this->wielkoscTablicy = 10;//wielkosc tablicy w ktorej mozemy przechowywac maszyny
	this->tablicaMaszyn = new Maszyna*[this->wielkoscTablicy];//tworzymy tablice wskanikow do maszyn
}

void BazaDanych::zapisz(string nazwaPliku)
{
	ofstream strumienPlikuDoZapisu;//tworzymy obiekt strumienia do zapisu pliku
	strumienPlikuDoZapisu.open(nazwaPliku);//otwieramy strumien podajcac nazwe pliku
	
	strumienPlikuDoZapisu << iloscMaszyn << endl; //zapisujemy ilosc maszyn

	for (int i = 0; i < iloscMaszyn; i++)
	{
		Maszyna *m = tablicaMaszyn[i];
		m->zapisz(strumienPlikuDoZapisu);//zapisujemy kolejne maszyny
	}

	strumienPlikuDoZapisu.close();//zamykamy strumien
}

void BazaDanych::wczytaj(string nazwaPliku)
{
	ifstream strumienPlikuDoOdczytu;//tworzymy obiekt strumienia do odczytu z pliku
	strumienPlikuDoOdczytu.open(nazwaPliku);//otwieramy strumien
	
	usunTabliceMaszyn();//usuwamy dotychczas istniejaca tablice z maszynami
	
	strumienPlikuDoOdczytu >> this->iloscMaszyn;//odczytujemy ilosc maszyn
	this->wielkoscTablicy = this->iloscMaszyn + 10;//ustawiamy wielkosc tablicy o 10 wieksza od ilosci maszyn (10 dodatkowych wolnych miejsc na nowe maszyny)
	this->tablicaMaszyn = new Maszyna*[this->wielkoscTablicy];//tworzymy nowa tablice maszyn
	
	for (int i = 0; i < this->iloscMaszyn; i++)
	{
		Maszyna* m = new Maszyna();
		//tu robimy obiekt bo musimy zainicjowac wskaznik
		//odczutyjemy typ
		int typ;
		strumienPlikuDoOdczytu >> typ;
		//w zaleznosci od odczytanego z pliku typu tworzymy odpowiedni obiekt
		switch (typ)
		{
		case 1:
			m = new Maszyna();
			break;
		case 2:
			m = new Koparka();
			break;
		}
		m->wczytaj(strumienPlikuDoOdczytu); //wczytujemy pozosta³e dane obiektu
		this->tablicaMaszyn[i] = m;//wstawiamy wskaznik na obiekt do tablicy wskanikow
	}
	strumienPlikuDoOdczytu.close();//zamykamy strumien 
}

void BazaDanych::dodajMaszyne(Maszyna * maszyna)
{
	if (this->wielkoscTablicy == this->iloscMaszyn)//sprawdzamy czy mamy wolne miejsce w tablicy maszyn na nowa maszyne
	{
		this->powiekszTabliceMaszyn();//powiekszamy tablice maszyn robiac miejsce na nowe maszyny
	}
	tablicaMaszyn[iloscMaszyn] = maszyna;//przypisujemy nowa maszyne (wskanik) w 1 wolne miejsce w tablicy maszyn
	this->iloscMaszyn++;//zwiekszamy ilosc maszyn
}

void BazaDanych::usunMaszyne(int index)
{
	if (index > iloscMaszyn - 1)//sprawdzamy czy podany przez uzytkownika index jest poprawny
	{
		return; // jezeli index nie jest poprawny konczymy dzialanie funkcji
	}

	delete tablicaMaszyn[index];//usuwamy obiekt o wybranym indeksie
	for (int i = index; i < iloscMaszyn-1; i++)//i < iloscMaszyn-1 bo w petli odnosimy sie do tablicaMaszyn[i + 1] 
	{
		tablicaMaszyn[i] = tablicaMaszyn[i + 1];//przesuwamy wszystkie wskazniki zeby zalatac dzure po wskaniku na obiekt ktory usunelismy
	}
	this->iloscMaszyn--;//zmiejszamy ilosc maszyn
	tablicaMaszyn[iloscMaszyn] = 0;//zerujemy ostatni wskaznik (bo go juz przesunelismy w lewo)
}

Maszyna * BazaDanych::getMaszyna(int index)//zwracamy maszyne o wybranym indeksie
{
	return this->tablicaMaszyn[index];
}

int BazaDanych::getIloscMaszyn()//zwracamy ilosc maszyn
{
	return this->iloscMaszyn;
}

void BazaDanych::powiekszTabliceMaszyn() // powiekszamy tablice maszyn
{
	this->wielkoscTablicy = this->wielkoscTablicy + 10; //zwiekszamy wielkosc zmiennej wielksocTablicy o 10
	Maszyna ** pomTablicaMaszyn = new Maszyna*[this->wielkoscTablicy]; // tworzymy nowa tablice maszyn wieksza o 10 miejsc
	for (int i = 0; i < this->iloscMaszyn; i++)//przepisujemy elementy ze starej tablicy maszyn do nowej
	{
		pomTablicaMaszyn[i] = this->tablicaMaszyn[i];
	}
	delete this->tablicaMaszyn;//usuwamy stara tablice maszyn
	this->tablicaMaszyn = pomTablicaMaszyn;//od teraz operujemy nowa tablica maszyn
}

void BazaDanych::usunTabliceMaszyn() //usuwamy tablice maszyn wraz ze wszystkimi obiektami
{
	for (int i = 0; i < this->iloscMaszyn; i++)//usuwamy wszystkie obiekty 
	{
		delete this->tablicaMaszyn[i];
	}
	delete this->tablicaMaszyn;//usuwamy sama tablice
}

BazaDanych::~BazaDanych()
{
	usunTabliceMaszyn();//usuwamy tablice maszyn
}
