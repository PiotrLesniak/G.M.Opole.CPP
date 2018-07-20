/*
 * Klasa prezentuje wzorzec projektowy singleton
 * chodzi o to ze chcemy miec pewnosc ze w ca³ej aplikacji bedzie wystepowa³ tylko jeden obiekt danej klasy
 */
public class MySingleton {

	//1. tworzyymy statyczny uchwyt na klase w ktorej sie znajdujemy
	// w naszym przypadku MySingleton
	private static MySingleton instance;
	
	//2. torzymy prywatny konstruktor
	// uniemozliwia to stworzenie obiektu z poza klasy w ktorej sie znajdujemy (MySingleton)
	private MySingleton()
	{
		
	}
	
	//3. Tworzymy metode ktora zwroci nam zawsze ten sam nasz jedyny obiekt
	//klasa ta musi tez byc statyczna bo dopiero za pomoca niej dostaniemy sie do obiektu.
	//wczesniej nie mamy zadnego obiektu wiec metoda musi byc wywolywana z samej klasy
	public static MySingleton GetInstance()
	{
		//jezeli do uchwytu onstance nie bedzie stworzonego obiektu to utworzymy go.
		if(instance == null)
		{
			//tutaj mozemy u¿yc konstruktora naszej klasy mimo ze jest on prywatnu 
			//poniewa¿ znajdujemy sie wewnacz tej klasy a tu mamy dostep do jej skladnikow prywatnych
			instance = new MySingleton();
		}
		
		//zwracamy zawsze nasz jedyny i ten sam obiekt
		return instance;
	}
	
	//tutaj dalej mozemy juz tworzyc wlasciwe metody
	//nie musza byc one statyczne
	public void doSemethink()
	{
		
	}
	
}
