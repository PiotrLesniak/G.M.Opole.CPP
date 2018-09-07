import dictionary.version2.ExampleClass;

public class Main {

	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ExampleClass example1 = new ExampleClass();

		//jakis kod uzywa danej biblioteki
		System.out.println("wynik kalkulacji to: " + example1.calculateSomethink(1, 2));
	
		//piszac nowy kod i prubujac uzyc starej fynkcji widzymy ze jest przekreslona
		//zbaczy to ze autor danej bublioteki nie zaleca uzywania tej funkcji.
		//w takim wypadku nalezy poszukac innej alternatywy.
		//n.p.
		System.out.println("wynik nowej kalkulacji to: " + example1.betterCalculateSomethink(2));
		
	
	}

}
