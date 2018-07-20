package MyFirstPackage;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Menu {
	
	BufferedReader reader;
	
	public Menu()
	{
		reader = new BufferedReader(new InputStreamReader(System.in));  
	}
	
	public void showMenu()
	{
		System.out.println("-= MENU =-");
		System.out.println("1 - dodaj");
		System.out.println("2 - usun");
		System.out.println("3 - jedz");
		System.out.println("4 - zatankuj");
		
		int selectedOption = this.readOption();
	}
	
	private int readOption()
	{
		while(true)
		{
			System.out.print("Wybierz opcje:");
		    try {
				
				String line = reader.readLine();
				return Integer.parseInt(line);
        	} 
        	catch (IOException e1) {
				System.out.println("Nie moge odczytac");
			} 
        	catch (java.lang.NumberFormatException e2) {
        		System.out.println("Nie poprawny numer menu");
        	}
    
		}
	}
	
	
}
