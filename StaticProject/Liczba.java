package MyFirstPackage;

public class Liczba {
	int wartosc;
	public Liczba(int wartosc)
	{
		this.wartosc = wartosc;
	}
	
	public int PodniesDoPotegi(int potega)
	{
		int wynik = 1;
		for(int i=0; i<potega; i++)
		{
			wynik*= wartosc;
		}
		return wynik % 101;
	}
	
	public static int PodniesDoPotegi(int x, int potega)
	{
		int wynik = 1;
		for(int i=0; i<potega; i++)
		{
			wynik*= x;
		}
		return wynik % 101;
	}
	
	public static int MaxValue()
	{
		return 100;
	}
	
}
