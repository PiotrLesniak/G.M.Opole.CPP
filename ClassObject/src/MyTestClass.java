/*
 * Klasa ta jak ka�da inna klasa w javie dziedziczy domy�lnie po klasie Object
 * oprocz tego je�eli to zaimplementujemy mo�e jeszcze dziedziczyc po 1 dowolnej klasie
 */
public class MyTestClass {

	
	//po klasie Object dziedziczymy np metode toString() zamieniajaca obiekt na napis (string)
	//mozemy napisa� w�asna wersje metodey to string
	//gdy to zrobimy to bedzie ona wywolywana poprzez mechanizm polimorfizmu
	@Override
	public String toString() {
		return "this is my bersion of method toString blabla....";
	}
	
	
}
