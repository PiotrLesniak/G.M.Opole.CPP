
public class Person {
	private String name;
	private String surname;
	private String eyeColor;
	private String gender;
	private String prefix;
		
	
	/*
	 *  Metoda toString jest to nadpisana metoda pochodzaca z klasy Object z ktorej dziedziczy kazda klasa w javie
	 *  Poniewa¿ poni¿sza metoda bazuje na wartosciach stringow,
	 *  ktore dowolnie mo¿e ustawiæ u¿ytkownik tej klasy za pomoc¹ seterów,
	 *  metoda ta jest bardzo podatna na b³êdy.
	 *  Dodatkowo wymagana by³a by dokumantacja dla u¿ytkownika takiej klasy, 
	 *  która mówi³a by jakie wartoœci stringów ustawiaæ aby ca³oœæ dzia³a³a zgodnie z oczekiwaniami u¿ytkownika
	 *  Np. je¿eli nie wiemy jaka wartoœæ ustawiæ jako tytu³ naukowy w metodzie void setPrefix(String prefix)
	 *  to musimy wiedzieæ, ¿e w takiej sytuacji funkcja spodziewa siê dok³adnie wartosci 'BRAK' inaczej nie zadzia³a
	 *  
	 */
	@Override
	public String toString() {
		String prefix = ""; //tworzymy zmienna prefix - w niej bedzie to co bedzie znajdowalo sie przed nazwiskiem
		//UWAGA!! nie nalezy mylic z this.prefix - to jest pole z klasy w ktorej trzymamy tytu³ np dr, pfor., in¿.
		
		if(this.prefix.equals("BRAK"))//je¿eli tytu³ (naukowy) ma wartoœæ brak to patrzymy na plec
		{
			if(gender.equals("M"))// je¿eli tytu³ naukowy to 'BRAK' i plec to 'M' dajemy przedrostek 'Mr."
			{
				prefix = "Mr.";
			}
			else { // w przeciwnym wypadku dajemy przedrostek 'Miss'
				prefix = "Miss.";
			}
		}
		else // Je¿eli this.prefix (tutu³ naukowy) nie ma wartosci 'Brak' to ustawiamy go jako przedrostek przed imieniem i nazwiskiem
		{
			prefix = this.prefix;
		}
		
		//na koniec skladamy cale zdanie:
		//nasz ustalony prefix + imie + nazwisko + jaki dana osoba ma kolor oczu
		return prefix + " " +  name + " " + surname + " ma oczy koluru " + eyeColor;
	
	}

	/*
	 * Sekcja seterow
	 * Setey umozliwiaja ustawienie wartosci w obiekcie
	 * Getery i setery mozna generowac automatycznie
	 * 
	 *  Klikamy prawy na kodzie -> Source -> Generate Getters and Setters...
	 * 
	 */
	
	public void setName(String name) {
		this.name = name;
	}


	public void setSurname(String surname) {
		this.surname = surname;
	}

	public void setEyeColor(String eyeColor) {
		this.eyeColor = eyeColor;
	}

	public void setGender(String gender) {
		this.gender = gender;
	}

	public void setPrefix(String prefix) {
		this.prefix = prefix;
	}	
	
}
