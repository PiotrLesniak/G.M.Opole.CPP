package MyFirstPackage;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import Exceptions.IncorectYearException;

public class MyReader {

	BufferedReader reader;
	
	public MyReader()
	{
		reader = new BufferedReader(new InputStreamReader(System.in));  
	}
	public int readInt() throws IOException
	{
		String line = reader.readLine();
		return Integer.parseInt(line);
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
