
public class Main {

	public static void main(String[] args) {
		BetterPerson person = new BetterPerson();
		EyeColor color = EyeColor.valueOf("blue");
		
		person.setName("Jan");
		person.setSurname("Kowalski");
		person.setGender(Gender.Mail);
		person.setPrefix(Prefix.Profesor);
		System.out.println(person);
		
		//ourPrintEverythink(person);
		
		BetterPerson person2 = new BetterPerson();
		
		person2.setName("Jan");
		person2.setSurname("Kowalski");
		person2.setGender(Gender.Mail);
		person2.setPrefix(Prefix.Profesor);
		System.out.println(person2);
		
		BetterPerson badPerson1 = new BetterPerson();
		
		badPerson1.setName("Jan");
		badPerson1.setSurname("Kowalski");
		badPerson1.setGender(Gender.Mail);
		badPerson1.setPrefix(Prefix.NoPrefix);
		badPerson1.setEyeColor("blablabla");
		System.out.println(badPerson1);
		
		BetterPerson badPerson2 = new BetterPerson();
		
		badPerson2.setName("Jan");
		badPerson2.setSurname("Kowalski");
		badPerson2.setGender(Gender.Mail);
		badPerson2.setPrefix(Prefix.Doctor);
		badPerson2.setEyeColor("blue");
		
		System.out.println(badPerson2);
		
		
		BetterPerson badPerson3 = new BetterPerson();
		
		badPerson3.setName("Jan");
		badPerson3.setSurname("Kowalski");
		badPerson3.setGender(Gender.Mail);
		badPerson3.setPrefix(Prefix.Profesor);
		badPerson3.setEyeColor("Brown");
		System.out.println(badPerson3);
	}
	
	public static void personTest()
	{
		System.out.println("----------------Person test-------------------");
		Person person = new Person();
		
		person.setName("Jan");
		person.setSurname("Kowalski");
		person.setGender("M");
		person.setPrefix("prof.");
		System.out.println(person);
		
		//ourPrintEverythink(person);
		
		Person person2 = new Person();
		
		person2.setName("Jan");
		person2.setSurname("Kowalski");
		person2.setGender("M");
		person2.setPrefix("BRAK");
		System.out.println(person2);
		
		Person badPerson1 = new Person();
		
		badPerson1.setName("Jan");
		badPerson1.setSurname("Kowalski");
		badPerson1.setGender("m");
		badPerson1.setPrefix("Brak");
		System.out.println(badPerson1);
		
		Person badPerson2 = new Person();
		
		badPerson2.setName("Jan");
		badPerson2.setSurname("Kowalski");
		badPerson2.setGender("m");
		badPerson2.setPrefix("BRAK");
		System.out.println(badPerson2);
		
		Person badPerson3 = new Person();
		
		badPerson3.setName("Jan");
		badPerson3.setSurname("Kowalski");
		badPerson3.setGender("M");
		badPerson3.setPrefix("ProFesorek");
		System.out.println(badPerson3);
	}
	
	
	public static void ourPrintEverythink(Object object)
	{
		System.out.println("This is aour objects: " + object.toString() + "!");
		System.out.println("This is aour objects hash code: " + object.hashCode() + "!");
	}

}
