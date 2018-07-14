package Logic;

import Shapes.Triangle;

public class Main {

	public static void main(String[] args) {
		
		Screan s = new Screan(500, 10);
		IScrean screan = s;
		
		Triangle triangle = new Triangle(4,s);
		triangle.print(1, 1);
		triangle.print(1, 3);
		triangle.print(15, 3);
		screan.printToConsole();
		// TODO Auto-generated method stub
		//System.out.println("*****####**********88888888****************************************************************************************************");
		//System.out.p
	}

}
