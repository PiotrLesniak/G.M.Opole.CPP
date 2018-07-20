package Mashines;

import java.io.IOException;
import Exceptions.IncorectYearException;
import MyFirstPackage.MyReader;

public abstract class Mashine {
	private int number;
	private int yearOfProduction;
	private String name;
	
	MyReader reader = new MyReader();  
	
	//metoda abstakcyjna do pokazywania informacji o danej maszynie
	public abstract void showInformation();
	
	//metoda pomocnicza (protected - dostepna dla klas potomnych)
	//wypisujaca podstawowe informacje o maszynie
	protected void showBaseInformarion()
	{
		System.out.println(this.getClass().getName());
		System.out.println("Name:"+ name);
		System.out.println("Number:"+ number);
		System.out.println("Year of production:"+ yearOfProduction);	
	}
	
	//metoda do pobierania roku produkcji od uzytkownika
	public void ReadYear() throws IOException, IncorectYearException
	{
		System.out.print("Podaj rok produkcji: ");
		this.yearOfProduction = reader.readYear();
	}
	
	
	
}
