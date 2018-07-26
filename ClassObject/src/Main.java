public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 
		//W tym przypadku klasa MyTestClassWithNothing nie zawiera zadnych metod wiec zostana wywolane te z klasy Object
		MyTestClassWithNothing nothink = new MyTestClassWithNothing();
		System.out.println("toString na klasie: MyTestClassWithNothing");
		ourPrintEverythink(nothink);
		
		//Klasa integer mimo ze wbudowana to zawiera wlasne wersje metod: toString, hashCode
		Integer integer = new Integer(3);
		System.out.println("toString na klasie: Integer");
		ourPrintEverythink(integer);
		
		//Klasa MyTestClass zawiera tylko wlasna wersje metody toString, a hashCode jest odzieiczona po klasie Object
		MyTestClass myTestClass = new MyTestClass();
		System.out.println("toString na klasie: MyTestClass");
		ourPrintEverythink(myTestClass);
	}

	/*
	 * ta funckaj dziala podobnie jak wiele funckji dzialajacych dzieki temu ze kazda klasa dziedziczy bo object
	 * 
	 * Pobierany jako parametr dowolny obiekt dziecka i przypisujemy go do uchwytu rodzica
	 * czyli klasyczne uzycie polimorfizmu
	 */
	public static void ourPrintEverythink(Object object)
	{
		//jezeli przyczepiony do uchwytu typu 'Object' obiekt napisze wlasna wersje danej odziedziczonej metody 
		//np. metody toString to za pomoca mechanizmu polimorfizmu zostanie wywolana jego wersja metody a nie rodzica
		System.out.println("This is aour objects: " + object.toString() + "!");
		System.out.println("This is aour objects hash code: " + object.hashCode() + "!");
	}
}
