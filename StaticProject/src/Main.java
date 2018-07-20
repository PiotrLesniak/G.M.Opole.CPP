
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x = 3;
		int potega = 2;
		
		
		//wiekszosc metod bazuje na wewnetrznych polach klasy.
		//np klasa liczba ma wartosc (podawana w konstruktorze)
		//metoda PodniesDoPotegi operuje na polu 'wartosc' i podnosi ja do potegi, a nastepnie zwraca wynik
		//(mozna wyobrazic sobie tez taka metode ktora nie zwraca wyniku tylko zmianie pole 'wartosc' podnoszac je do potegi
		Liczba liczba = new Liczba(x);
		int liczbaPodniesionaDoPotegi = liczba.PodniesDoPotegi(potega);
		
		//niektore metody dzialaja niezale¿nie od klas.
		//np metoda statyczna PodniesDoPotegi pobiera liczbe ktora ma byæ podniesiona oraz potege.
		//nie u¿ywa ona w swoim ciele ¿adnych nie statycznych metod ani pol
		 liczbaPodniesionaDoPotegi = Liczba.PodniesDoPotegi(x, potega);
		
		 //taka metode mo¿na przenieœæ do dowolnej klasy i tez bedzie dzialaæ, dlatego ze nie jest ona zale¿na od obiektow klasy.
		//np:
		 liczbaPodniesionaDoPotegi = ABC.PodniesDoPotegi(x, potega);
		
		 //funkcje statyczne moga uzywac pol i metod STATYCZNYCH
		 // NP:
		
		int maxValue = Liczba.MaxValue();
		
		//przyk³ad uzycia wzorca projektowego singleton
		MySingleton mysingleton = MySingleton.GetInstance();
		mysingleton.doSemethink();
		
		MySingleton mysingleton2 = MySingleton.GetInstance();
		
		//mysingleton i mysingleton2 pokazuje na ten sam obiekt;
		
	}

}
