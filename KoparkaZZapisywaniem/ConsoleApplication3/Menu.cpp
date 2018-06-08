#include "stdafx.h"
#include "Menu.h"


Menu::Menu(BazaDanych *bazadanych)
{
	this->bazadanych = bazadanych;
}


Menu::~Menu()
{
}

int Menu:: UruchomMenu()
{
	cout << "1 - odczyt" << endl;
	cout << "2 - zapis" << endl;
	cout << "3 - dodawanie maszyny" << endl;
	cout << "4 - usuwanie maszyny" << endl;
	cout << "5 - wyszukaj maszyne" << endl;
	cout << "6 - wypisz wszystkie maszyny" << endl;
	cout << "7 - wyjdz z programu" << endl;
	int wybranaOpcja;
	cout << "wybierz opcje: ";
	cin >> wybranaOpcja;

	while (wybranaOpcja < 1 || wybranaOpcja > 7)
	{
		cout << "opcja " << wybranaOpcja << " nie istnieje" << endl;
		cout << "wybierz opcje: ";
		cin >> wybranaOpcja;
	}
	return wybranaOpcja;
}

void Menu::Odczytaj()
{
	WypiszWybranaFunkcje("odczyt z pliku");
	cout << "podaj nazwê pliku: ";
	string nazwaPliku;
	cin >> nazwaPliku;
	//nazwaPliku = "test.txt";
	bazadanych->wczytaj(nazwaPliku);
	system("cls");
	cout << "dane zosta³y odczytane z pliku: " << nazwaPliku << endl;
}

void Menu::Zapisz()
{
	WypiszWybranaFunkcje("zapis do pliku");
	
	cout << "podaj nazwê pliku: ";
	string nazwaPliku;
	cin >> nazwaPliku;
	bazadanych->zapisz(nazwaPliku);
	system("cls");
	cout << "dane zosta³y zapisane do pliku: " << nazwaPliku <<  endl;
}

void Menu::DodajMaszyne()
{
	WypiszWybranaFunkcje("Dodawanie maszyny");
	bazadanych->dodajMaszyne(StworzMaszyne());
	system("cls");
	cout << "dodano maszyne " << endl;
}

void Menu::UsunMaszyne()
{
	WypiszWybranaFunkcje("Usuwanie maszyny");
	
	cout << "podaj index maszyny ktora chcesz usunac";
	int index;
	cin >> index;

	bazadanych->usunMaszyne(index);
	system("cls");
	cout << "usunieto maszyne o indeksie " << index << endl;
}

void Menu::Wypisz()
{
	
	cout << "|typ       |kalibraz  |moc       |rok |licznik   |numer     |nazwa     " << endl;

	for (int i = 0; i < bazadanych->getIloscMaszyn(); i++)
	{
		Maszyna* maszyna = bazadanych->getMaszyna(i);
		maszyna->wypiszWLinii();
		cout << endl;
	}
	
}

void Menu::Znajdz()
{
	WypiszWybranaFunkcje("Wyszukiwanie maszyny");
	cout << "podaj fraze wyszukiwania:";
	string frazaWyszukiwania;
	cin >> frazaWyszukiwania;

	cout << "|typ       |kalibraz  |moc       |rok |licznik   |numer     |nazwa     " << endl;

	for (int i = 0; i < bazadanych->getIloscMaszyn(); i++)
	{
		Maszyna* maszyna = bazadanych->getMaszyna(i);
		if (maszyna->czyZawiera(frazaWyszukiwania))
		{
			maszyna->wypiszWLinii();
			cout << endl;
		}
	}
}



Maszyna* Menu::StworzMaszyne()
{
	cout << "Tworzenie maszyny:" << endl;
	char rodzaj;
	Maszyna* maszyna;
	cout << "kopartka - k" << endl << " maszyna - m" << endl;
	cin >> rodzaj;
	if (rodzaj == 'k')
	{
		maszyna = new Koparka();
	}
	else {
		maszyna = new Maszyna();
	}
	system("cls");
	maszyna->wprowadzInformacje();
	system("cls");
	maszyna->wyswietlInformacje();

	return maszyna;
}

void Menu::WypiszWybranaFunkcje(string nazwaFunckji)
{
	system("cls");
	cout << "WYBRANA OPCJA: " << nazwaFunckji << endl;
}
