package Logic;

import java.awt.Color;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;
import Algoritms.IPrimeNumbers;
import Algoritms.PrimeNumbers;

/*
 * Klasa tworzy 2 wymiarowa przestrzen w ktorej sa ukladane liczby.
 * Nastepnie liczby sa zapisywane w postaci obrazka.
 * Kadej liczbie przyporzadkowany jest odpowiedni piksel 
 * Kolor poksela zalezy od tego czy liczba jest liczba pierwsza czy nie 
 */
public class NumberArea implements INumbersArrea {

	int size;// tutaj trzymy rozmiar naszej przestrzeni liczb
	IPrimeNumbers primeNumbers;//interfejs do klasy ktora okresla czy dana liczba jest liczba pierwsza czy nie
	BufferedImage image;// klasa do tworzenia obrazka

	public NumberArea(int size) {
		this.size = size;// trzoymy tablice liczba

		this.primeNumbers = new PrimeNumbers();//tworzymy klase, ktora okresla czy dana liczba jest liczba pierwsza czy nie 
		image = new BufferedImage(size, size, BufferedImage.TYPE_INT_RGB);// tworzymy obrazek (na razie w pamieci)
	}

	//klasa umozliwia wpusanie do przestrzeni liczb liczby w danym punkcie (x,y)
	//po ustawieniu liczby w danym punkcie od razu zamieniamy ja na piksel i wpisujemy do obrazka.
	@Override
	public void setNumber(int x, int y, long number) {
		
		// jezeli liczba jest = 1 to znaczy ze jest to pierwsza liczba i jest ona na srodku
		//dla tej liczby ustawiamy kolor czerwony, zeby dodatkowo zaznaczyc storek obrazka
		if (number == 1) {
			
			image.setRGB(x, y, Color.RED.getRGB());
		} else if (this.primeNumbers.isPrimeNumber(number)) {//jezeli jast liczba pierwsza to ustawiamy czarny piksel
			image.setRGB(x, y, Color.BLACK.getRGB());
		} else {
			image.setRGB(x, y, Color.WHITE.getRGB());//jezeli nie jest liczba pierwsza to ustawiamy bialy piksel
		}

	}

	//podajemy rozmiar naszej przestrzeni liczb
	@Override
	public int getSize() {
		return this.size;
	}

	//zapisyjemy obrazek ktory do tej porty znajdowal sie tylko w pamieci na dysk twardy
	public void save(String path) {
		try {
			ImageIO.write(image, "BMP", new File(path));
		} catch (IOException e) {
			//jezeli nie uda sie zapisac to bedzie wyswietlony ten komunikat
			System.out.println("Nie udalo sie zapisac do pliku");
		}
	}

}
