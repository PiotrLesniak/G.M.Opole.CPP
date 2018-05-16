#include "Circle_Storable.h"
#include "Triangle_Storable.h"
#include <iostream>
using namespace std;



int main()
{
	HWND hwnd = GetConsoleWindow();  HDC hdc = GetDC(hwnd);
	Shapes* shapes[10];
	int r = 1;
	cout << "Regim: 1 - Write, 2 - Read" << endl;
	cin >> r;
	// blok chroniony dla sprawdzania poprawnosci konstruktorow
	try
	{
		if (r == 2)
		{
			shapes[0] = new Circle_Storable("c1.txt", Storable::READ);
			shapes[1] = new Triangle_Storable("t1.txt", Storable::READ);
			shapes[2] = new Circle_Storable("c2.txt", Storable::READ);
		}
		else
		{
			shapes[0] = new Circle_Storable("c1.txt", Storable::WRITE, 100, 100, 30, 50);
			shapes[1] = new Triangle_Storable("t1.txt", Storable::WRITE, 10, 10, 20, 100, 50, 120, 90);
			shapes[2] = new Circle_Storable("c2.txt", Storable::WRITE, 200, 200, 50, 20);
		}

	}

	catch (const char *s)
	// w przypadky wystompienia bledow (generacji throw - wyjatky)  wpadamy w blok opracowania wyjatkow catch i poprawnie zkonczymy program
	{
		printf("Impossible to open file '%s'\n", s); return 1;
	}

	// W tablicy wskaznikow do Shapes zapisano obiekty potomkow naleza do klasy Circle_Storable czy Triangle_Storable odziedziczonymi od Shapes jak rownez od Storable.
	// Nie wiemy, jakiego wlacnie klasy (Circle_Storable czy Triangle_Storable) naleza objekty ale mozemy przekonwertowac wskaznik na wskaznik do klasy Storable, 
	// ktora, podobnie jak klasa Shapes, jest podstawa dla obu klas.
	// Jest to jednak mozliwe tylko wtedy, gdy program jest uruchomiony, wiec uzywany jest operator konwersji typow dynamic_cast, 
	// ktory sprawdza, czy obiekt nalezy do klasy pochodnej od klasy Storable i transformuje kiedy on naleze. Jesli obiekt naprawde nie byl
	// odziedziczony to operator dynamic_cast zwrocil wartosc 0.

	for (int i = 0; i < Shapes::GetCount(); i++)
		if (r == 2)
		{
			dynamic_cast<Storable*>(shapes[i])->Read();
		}
		else
		{
			dynamic_cast<Storable*>(shapes[i])->Write();
		}
	for (int  i = 0; i< Shapes::GetCount(); i++)
		shapes[i]->Draw(hwnd, hdc);
	system("cls");
	system("pause");
	for (int i = 0, n = Shapes::GetCount(); i< n; i++)
		delete shapes[i];


    return 0;
}