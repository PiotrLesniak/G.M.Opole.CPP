package MyFirstPackage;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import Exceptions.IncorectYearException;

public class MyReader {

	BufferedReader reader;// uchwyt do klasy czytajacej 
	
	public MyReader()
	{
		reader = new BufferedReader(new InputStreamReader(System.in));//inicjujemy klase czytajaca  
	}
	public int readInt() throws IOException
	{
		String line = reader.readLine();//wcztujemy linie od uzyrkownika jako String
		return Integer.parseInt(line);//zamieniamy (parsujemy) Stringa na Integera
	}
	
	public int readYear() throws IOException, IncorectYearException
	{
		int year = readInt();
		if((year < 0) || (year>2050)) 
		{
			throw new IncorectYearException(year);
		}
		return year;
	}
}
