package Logic;

import Shapes.Triangle;

public class Main {

	public static void main(String[] args) {
		
		
		IScrean screan = Screan.getInctance(); // podajemy obiekt do interfejsu , uzywajac tego interfejsu mamy dostep tylko do niektorych funkcji
		
		Triangle triangle = new Triangle(4, Screan.getInctance());//podajemy pelny obieks Screan s, ale triangle pobiera ten obiekt do interfejsu przez co mamy dostep tylko do funkcji z tego interfejsu
		triangle.print(1, 1);//drokujemy obiekt na screan (na razie jeszcze nie wyswietlamy)
		triangle.print(1, 3);//to samo co poprzenio
		triangle.print(15, 3);//to samo co poprzenio
		screan.printToConsole();//wypisujemy to co zgromadzilismy w obiekkce scran.
	}

}
