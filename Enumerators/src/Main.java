
public class Main {

	public static void main(String[] args) {
		personTest(); //testy klasy person - bez uzycia enumeratorow
		betterPersonTest();//testy lepszej wersji klasy person z urzyciem enumerotorow
	}
	
	public static void personTest()
	{
		System.out.println("----------------Person test-------------------");
		
		//test z podanymi wszystkimi wartosciami
		Person person = new Person();
		person.setName("Jan");
		person.setSurname("Kowalski");
		person.setGender("M");
		person.setPrefix("prof.");
		person.setEyeColor("niebieski");
		
		System.out.println(person);
		
		//ourPrintEverythink(person);
		
		//test dla pooprawnie podanej wartosci BRAN do prefixu
		Person person2 = new Person();
		person2.setName("Jan");
		person2.setSurname("Kowalski");
		person2.setGender("M");
		person2.setPrefix("BRAK");
		person2.setEyeColor("niebieski");
		System.out.println(person2);
		
		//test dla niepoprawnie podanej plci i prefixu
		Person badPerson1 = new Person();
		badPerson1.setName("Jan");
		badPerson1.setSurname("Kowalski");
		badPerson1.setGender("m");
		badPerson1.setPrefix("Brak");
		System.out.println(badPerson1);
		
		//test dla niepoprawnie podanej plci
		Person badPerson2 = new Person();
		badPerson2.setName("Jan");
		badPerson2.setSurname("Kowalski");
		badPerson2.setGender("m");
		badPerson2.setPrefix("BRAK");
		System.out.println(badPerson2);
		
		//test dla niepoprawnie podanego prefixu
		Person badPerson3 = new Person();
		badPerson3.setName("Jan");
		badPerson3.setSurname("Kowalski");
		badPerson3.setGender("M");
		badPerson3.setPrefix("ProFesorek");
		System.out.println(badPerson3);
	}
	
	//testy lepszej wersji klasy person z urzyciem enumerotorow
	public static void betterPersonTest()
	{
		System.out.println("----------------BetterPerson test-------------------");
		//test parsowania enumeratora
		//wartosc enumeratora mozemu podpatrzec uruchamiajac program w trybie debug
		EyeColor color = EyeColor.valueOf("blue");
		
		//test BetterPerson dla nie podanego koloru oczu
		BetterPerson person = new BetterPerson();
		person.setName("Jan");
		person.setSurname("Kowalski");
		person.setGender(Gender.Mail);
		person.setPrefix(Prefix.Profesor);
		System.out.println(person);
		
		
		//test BetterPerson dla podanej blednej wartosci jako kolor oczu
		BetterPerson badPerson1 = new BetterPerson();
		badPerson1.setName("Jan");
		badPerson1.setSurname("Kowalski");
		badPerson1.setGender(Gender.Mail);
		badPerson1.setPrefix(Prefix.NoPrefix);
		badPerson1.setEyeColor("blablabla");
		System.out.println(badPerson1);
		
		//test badPerson2 dla podnia wszystkich poprawnych wartosci
		BetterPerson badPerson2 = new BetterPerson();
		badPerson2.setName("Jan");
		badPerson2.setSurname("Kowalski");
		badPerson2.setGender(Gender.Mail);
		badPerson2.setPrefix(Prefix.Doctor);
		badPerson2.setEyeColor("blue");
		
		System.out.println(badPerson2);
		
		// test badPerson3 dla nie podania tutu³u naukowego
		BetterPerson badPerson3 = new BetterPerson();
		
		badPerson3.setName("Jan");
		badPerson3.setSurname("Kowalski");
		badPerson3.setGender(Gender.Mail);
		badPerson3.setEyeColor("Brown");
		System.out.println(badPerson3);
		
		//ourPrintEverythink(person);
	}
	
	
	

}
