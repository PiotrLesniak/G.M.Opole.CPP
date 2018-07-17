package Logic;

/***
 * Klasa screan przechoduje tablice 2 wymiarowa pikseli.
 * Implementuje 2 interfejsy - 
 * IScreanForShapes - dla klas krzta³tów
 * IScrean - dla innych klas (w naszym przyk³adnie Main)
 * 
 */
public class Screan implements IScreanForShapes, IScrean {

	static Screan insance;
	
	private char[][] pixels;//tablicza pixeli - tutaj trzymamy stan naszego 'ekranu'
	
	private Screan()//tworzac Screan , 
	{
		this.pixels = new char[10][500];
	}

	public static Screan getInctance()
	{
		if(insance == null)
		{
			insance = new Screan();
		}
		return insance;
	}
	
	public void setPixel(int x, int y, char color) { // ustawiamy kolor (znak) w wybraym miejscy (x,y)
		this.pixels[y][x] = color;// przypisujemy kolor (znak) do odpowiedniego miejsca w tablicy
	}

	public void printToConsole() {//wypisujemy zawartosc tablicy na konsole
		for(int y=0; y<this.pixels.length; y++) //ilosc tablic bedocych wieraszmi
		{
			for(int x=0; x<this.pixels[y].length; x++) //dlugosc tablicy - jednego wiersza
			{
				System.out.print(this.pixels[y][x]);//wypisujemy wybrany element na ekran (bez entera)
			}
			System.out.println();//po przejscu calej petli w wierszu dajemy enter.
		}
	}

	public void clearMemory() {// kazdy element tablicy ustawiamy na spacje
		for(int y=0; y<this.pixels.length; y++)
		{
			for(int x=0; x<this.pixels[y].length; x++)
			{
				this.pixels[y][x] = ' ';
			}
		}
	}

	@Override
	public void clearConsole() {// wypisujemy sames spacje
		for(int y=0; y<this.pixels.length; y++)
		{
			for(int x=0; x<this.pixels[y].length; x++)
			{
				System.out.print(' ');
			}
			System.out.println();
		}
		
	}
}
