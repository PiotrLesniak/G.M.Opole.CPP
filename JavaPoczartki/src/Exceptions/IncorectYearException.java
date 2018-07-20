package Exceptions;

@SuppressWarnings("serial")
public class IncorectYearException extends Exception{
	
	int year;
	public IncorectYearException(int year)
	{
		super();
		this.year = year;
	}
	public IncorectYearException(int year, String message)
	{
		super(message);
		this.year = year;
	}
	public int getYear() {
		return year;
	}
	
	
}
