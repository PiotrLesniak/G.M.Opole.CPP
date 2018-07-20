
public class ABC {
	
	
	public static void PodniesDoPotegiIWypisz(int x, int potega)
	{
		int liczbaPodniesionaDoPotegi = PodniesDoPotegi(x, potega);
		wypisz(liczbaPodniesionaDoPotegi);
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
	
	
	private static void wypisz(int liczba)
	{
		System.out.println("Liczba podniesiona do potegi to:"+ liczba);
	}
	
	
	
}
