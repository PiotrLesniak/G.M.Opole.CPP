/*
 * Klasa Prefix posiada przypisana wartosc do danej wartosci (opcji) enuma
 * ta przypisana wartosc jest w naszym przypadku stringiem, ale moze byc dowolnym innym obiektem, lub typem prostym
 * np int.
 */
public enum Prefix {
	
	Profesor("prof."), Doctor("dr"), Engineer("in¿."), NoPrefix("");
	
	//klasa enuma musi mieæ prywatny konstruktor
	//po to aby zapobiec tworzeniu tej klasy podajac nieprawidlowe wartosci do parametrow konstruktora
	private Prefix(String value)
	{
		this.value = value;
	}
	
	private String value;//tuttaj trzymamy wartosc polaczona z wybrana opcja konstruktora

	//funkcja umozliwia pobranie wartosci
	public String getValue() {
		return value;
	}
	
	
	
	
	
}
