/*
 * Jest to lepsza wersja klasy person
 * W przeciwienstwie do klasy person zamias pracowac na wartoscach stringa dzialamy na enymeratorach
 */
public class BetterPerson {
	private String name;
	private String surname;
	//ponizej mamy 3 pola enumeratorow
	//enumeratory (enum) sa uzywane je¿eli mamy zamknieta pule roznych wartosci np. lista kolorow oczu, p³eæ itp.
	private EyeColor eyeColor;
	private Gender gender;
	private Prefix prefix;
	
	//konstruktor bezparametrowy gdzie ustawiamy domysle wartosci
	//zabezpiecza nas to przed bledyn dzialaniem klasy,\
	//gdy uzytkownik nie poda za pomoca seterow wymaganych wartosci
	public BetterPerson() {
	
		prefix = Prefix.NoPrefix;
		gender = Gender.Mail;
		eyeColor = EyeColor.unknow;
	}
	
	/*
	 *  Metoda toString jest to nadpisana metoda pochodzaca z klasy Object z ktorej dziedziczy kazda klasa w javie
	 *  Poniewa¿ poni¿sza metoda nie bazuje na wartosciach stringow, lecz na enumeratorach
	 *  
	 *  Uzytkownik podaje wartosci enumeratorow za pomoc¹ seterow.
	 *  Ma on ograniczona liczbe bozliwsosci,
	 *  przez co latwiej jest obsluzyc wszystkie mozliwe ustawienia uzytkownika
	 *  Funckja toString jest rowniez bardzziej intuicyjna od funkcji toString z klasy Person.
	 */
	@Override
	public String toString() {
		String prefix = "";
		
		if(this.prefix == Prefix.NoPrefix)
		{
			if(gender == Gender.Mail)
			{
				prefix = "Mr.";
			}
			else {
				prefix = "Miss.";
			}
		}
		else
		{
			prefix = this.prefix.getValue();
		}
		
		String personFullName = prefix + " " +  name + " " + surname;
		if(eyeColor == EyeColor.unknow)
		{
			return personFullName;
		}
		return  personFullName + "ma oczy koluru " + eyeColor.toString();
	
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
		this.eyeColor = EyeColor.parse(eyeColor);
	}


	public void setGender(Gender gender) {
		this.gender = gender;
	}

	public void setPrefix(Prefix prefix) {
		this.prefix = prefix;
	}

}
