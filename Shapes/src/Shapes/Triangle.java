package Shapes;

import Logic.IScreanForShapes;

public class Triangle {
	
	int hight;
	IScreanForShapes screan;
	
	//podajemy wysokosc trujkata, oraz obiekt impelemtujacy interfejs IScreanForShapes
	public Triangle(int hight, IScreanForShapes screan)
	{
		this.hight = hight;
		this.screan = screan;
	}
	
	// zawsze zaczynamy od 1 gwiazdki
	// kazda kolejna linijka ma 2 * wiecej
	// spacje = poczatkowa ilosc to wysokoc - 1
	// ilosc spacji zmniejsza sie o 1 
	public void print(int x, int y)
	{
		int coutnOfPixelsInLine = 1;//ilosc znakow wypisanych w lini (zaczynami od jednego)
		//wysokosc 4
		int start = this.hight -1;//parametr start mowi od ktorego znaku zaczac rysowac choinke
		for(int i=0 ; i< hight; i++)//petla rysuje tyle odpowiednich linii ile wynosi wysokosc choinki
		{
			printLine(start, coutnOfPixelsInLine, i, x-1, y-1);// rysujemy jedna linie choinki
			start--;//rysujac kolejna linie startujemy o 1 znak wczesniej
			coutnOfPixelsInLine+=2;//rysujac kolejna linie tworzymy 2 znaki wiecej
		}
	}
	/***
	 * 
	 * @param start - mowi na ktorym elemencie zaczynamy pisac znaki
	 * @param length - ilosc znakow ktore maja byc wypisane
	 * @param linia - wzgledny numer linii 
	 * @param x - wspolrzedna x choinki 
	 * @param y - wspolrzedna y choinki
	 */
	private void printLine(int start, int length, int linia, int x, int y)
	{
		for(int i=0; i<length; i++)//petla przekreci sie tyle razy ile chcemy wypisac znakow
		{
			//znak wypisujemy o spolrzednuch (X, Y)
			//X jest sk³adow¹:
			// x - wspolrzedna poczatku krzaltu
			// start - pozycja od ktorej zaczynamy wypisywac znaki w linii
			// i - ktory kolejny znak wypisujemy w petli
			// Y:
			// y - wporzedna poczatku krzaltu
			// linia - ktora kolejna linia jest przetwarzana
			this.screan.setPixel(x+start+ i, y+linia, '*');
		}
	}
	
}



//   *
//  ***
// *****
//*******
