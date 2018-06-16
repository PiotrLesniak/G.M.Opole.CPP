// Egzamin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "House.h"
#include "Flat.h"
using namespace std;

int main()
{
	cout << "House" << endl;
	cout << "tworze house1" << endl;
	House* house1 = new House();
	house1->Input();
	cout << "house1" << endl;
	house1->Print();

	cout << "ustawiam number na 3 w house1" << endl;
	house1->SetNumber(3);
	cout << "number=" << house1->GetNmber() << endl;

	cout << "ustawiam type na a w house1" << endl;
	house1->SetType(new char('a'));
	char* type = house1->GetType();
	cout << "type=" << *type << endl;



	//test operatora = 
	cout << "test operatora =" << endl;
	House house2;
	house2 = *house1;
	house1->Print();
	
	cout << "test konstruktora kopiujacego" << endl;
	House *house3 = new House(house2);
	house3->Print();

	cout << "test konstruktora z parametrami" << endl;
	house3 = new House(new char('a'), 5);
	house3->Print();

	cout << "Flat" << endl;
	cout << "tworze house1" << endl;
	House* flat1 = new Flat();

	flat1->Input();
	cout << "flat2" << endl;
	flat1->Print();

	cout << "ustawiam number na 3" << endl;
	flat1->SetNumber(3);
	cout << "number=" << flat1->GetNmber() << endl;

	cout << "ustawiam type na a" << endl;
	flat1->SetType(new char('a'));
	type = flat1->GetType();
	cout << "type=" << *type << endl;

	cout << "test konstruktora z parametrami" << endl;
	Flat flat2;
	Flat* flat3 = new Flat(new char('a'), 2, new char('b'));
	cout << "test operatora =" << endl;
	flat2 = *flat3;
	flat2.Print();

	cout << "ustawiam ownera na a" << endl;
	flat3->SetOwner(new char('a'));
	type = flat3->GetOwner();
	cout << "owner=" << *type << endl;

	
	int x;
	cin >> x;
    return 0;
}

