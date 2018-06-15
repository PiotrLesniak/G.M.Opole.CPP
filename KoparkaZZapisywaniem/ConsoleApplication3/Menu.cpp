#include "stdafx.h"
#include "Menu.h"


Menu::Menu(BazaDanych *bazadanych)
{
	this->bazadanych = bazadanych;//menu posiada w sobie baze danych
}


Menu::~Menu()
{
}

int Menu:: UruchomMenu() //wypisuje opcje menu i pobiera od uzytkownika wybrana opcje
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
	cin >> wybranaOpcja; //pobieramy od uzytkowniaka wybrana przez niego opcje
	//sprawdzamy czy opcja jest poprawna i dopuki nie jest prosimy uzytkownika o podanie poprawnej opcji
	while (wybranaOpcja < 1 || wybranaOpcja > 7)
	{
		//jezeli uzytkownik podal bledna opcje to piszeby ze wybrana opcja nie istnieje i czekamy na podanie poprawnej opcji
		cout << "opcja " << wybranaOpcja << " nie istnieje" << endl;
		cout << "wybierz opcje: ";
		cin >> wybranaOpcja;
	}
	return wybranaOpcja;//zwracamy opcje wyrbana przez uzytkownika 
}

void Menu::Odczytaj()
{
	WypiszWybranaFunkcje("odczyt z pliku");
	//pobieramy od uzytkowpnika nazwe pliku (plik testowy: test.txt)
	cout << "podaj nazwê pliku: ";
	string nazwaPliku;
	cin >> nazwaPliku;

	bazadanych->wczytaj(nazwaPliku); //odczytujemy dane z pliku w naszej bazie danych
	system("cls");//czyscimy ekran
	cout << "dane zosta³y odczytane z pliku: " << nazwaPliku << endl;//wypisujemy informacje ze dane zostaly odczytane
}

void Menu::Zapisz()
{
	WypiszWybranaFunkcje("zapis do pliku");
	//pobieramy od uzytkowniaka nazwe pliku do ktorego mamy zapisac dane z bazy danych
	cout << "podaj nazwê pliku: ";
	string nazwaPliku;
	cin >> nazwaPliku;
	bazadanych->zapisz(nazwaPliku);//zapisujemy dane z bazy danych
	system("cls");//czyscimy ekran
	cout << "dane zosta³y zapisane do pliku: " << nazwaPliku <<  endl;//wypisujemy komunikat o zapisaniu danych do pliku
}

void Menu::DodajMaszyne()
{
	WypiszWybranaFunkcje("Dodawanie maszyny");
	//uruchamiamy funkcje StworzMaszyne ktora tworzy maszyne na podswatie danych pobranych od uzytkownika
	//stworzona maszya jest dodawana do bazy danych
	bazadanych->dodajMaszyne(StworzMaszyne());
	system("cls");//czyscimy ekran
	cout << "dodano maszyne " << endl;//wypisujemy komunikat, ze maszyna zostaa dodana
}

void Menu::UsunMaszyne()
{
	WypiszWybranaFunkcje("Usuwanie maszyny");
	//pobieramy od uzytkowniaka indeks maszyny ktora ma byc usunieta
	cout << "podaj index maszyny ktora chcesz usunac";
	int index;
	cin >> index;

	bazadanych->usunMaszyne(index);//usuwamy maszyne o wybranym indeksie
	system("cls");
	cout << "usunieto maszyne o indeksie " << index << endl;//wypisujemy komunikat o sunieciu maszyny
}

void Menu::Wypisz()//funkcja robi tabelke z maszynami ( w tym koparkami)
{
	//wypisujemy naglowek tabelki
	cout << "|typ       |kalibraz  |moc       |rok |licznik   |numer     |nazwa     " << endl;

	//wykonujemy petle tyle razy ile jest maszyn w bazie danch
	for (int i = 0; i < bazadanych->getIloscMaszyn(); i++)
	{
		Maszyna* maszyna = bazadanych->getMaszyna(i);//pobieramy maszyne z bazy danych
		maszyna->wypiszWLinii();//wypisujemy dane maszyny w postaci wiersza tabeli
		cout << endl;
	}
	
}

void Menu::Znajdz()
{
	WypiszWybranaFunkcje("Wyszukiwanie maszyny");
	//pobieramy od uzytkownika fraze po ktorej dane beda wyszukiwane
	cout << "podaj fraze wyszukiwania:";
	string frazaWyszukiwania;
	cin >> frazaWyszukiwania;

	//robimy naglowek tabeli
	cout << "|typ       |kalibraz  |moc       |rok |licznik   |numer     |nazwa     " << endl;
	
	//wykonujemy petle tyle razy ile jest maszyn w bazie danch
	for (int i = 0; i < bazadanych->getIloscMaszyn(); i++)
	{
		Maszyna* maszyna = bazadanych->getMaszyna(i);//pobieramy maszyne z bazy danych
		if (maszyna->czyZawiera(frazaWyszukiwania))//sprawdzamy czy obiekt zawiera wybrana fraze 
		{
			maszyna->wypiszWLinii();//wypisujemy dane maszyny w postaci wiersza tabeli
			cout << endl;
		}
	}
}



Maszyna* Menu::StworzMaszyne() //funcka tworzy maszyne na podswatie danych pobranych od uzytkownika
{
	cout << "Tworzenie maszyny:" << endl;
	char rodzaj;
	Maszyna* maszyna;
	cout << "kopartka - k" << endl << " maszyna - m" << endl;
	cin >> rodzaj;//pobierzmy od uzytkownika rodzaj maszyny jaki ma byc stworzony (kopraka / maszyna)
	if (rodzaj == 'k')
	{
		maszyna = new Koparka();
	}
	else {
		maszyna = new Maszyna();
	}
	system("cls");
	maszyna->wprowadzInformacje();//obiekt maszyny pobiera od uzytkownika potrzebne my informacje
	system("cls");
	maszyna->wyswietlInformacje();//obiekt wypisuje infortmacje

	return maszyna;//zwracamy obiekt stworzonej maszyny
}

void Menu::WypiszWybranaFunkcje(string nazwaFunckji) // w ladny sposob wypisujemy na ekran jaka opcja zostala wybrana.
{
	system("cls");//czyszczenie ekranuy
	cout << "WYBRANA OPCJA: " << nazwaFunckji << endl; // wypisanie opcji
}
