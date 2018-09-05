package Logic;

import Algoritms.SnailOfNumbers;

public class Main {

	public static void main(String[] args) {

		/*
		 * robimy test klasy PrimeNumbers PrimeNumbers numbers = new
		 * PrimeNumbers(); System.out.println("1 to " +
		 * numbers.isPrimeNumber(1)); System.out.println("2 to " +
		 * numbers.isPrimeNumber(2)); System.out.println("3 to " +
		 * numbers.isPrimeNumber(3)); System.out.println("4 to " +
		 * numbers.isPrimeNumber(4)); System.out.println("5 to " +
		 * numbers.isPrimeNumber(5)); System.out.println("6 to " +
		 * numbers.isPrimeNumber(6));
		 */

		NumberArea t = new NumberArea(301);// tworzymy klasa bedaca przestrzenia
											// dla liczb.
		SnailOfNumbers snailOfNumbers = new SnailOfNumbers(t);// algorytm do
																// ukladania
																// liczb w
																// postaci
																// spirali
		snailOfNumbers.runAlgoritm();// uruamiamy ukladanie luczb w spirale i
										// wpisywanie do przestrzeni liczb
										// 'NumberArea'
		t.save("C:\\Korepetycje\\MyImage.bmp");// zapisujemy nasza przestrzen
												// liczb w obrazek
		System.out.println("Koniec");

	}

}
