

public class Liczba {
	
	static int maxValue = 100;//tak mozemy inicjowac wartosci statyczne
	
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
		//jezeli wynik bedzie wiekszy niz maksymalna wartosc 
		//to zwrocimy reszte z dzielenie przez maksymalna wartosc
		return wynik % (maxValue+1);
	}
	
	public static int MaxValue()
	{
		return maxValue;
	}
	
}
