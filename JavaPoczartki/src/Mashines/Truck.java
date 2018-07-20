package Mashines;

import MyFirstPackage.IVehicle;

public class Truck extends Mashine  implements IVehicle {
	int liftingCapacity; // udzwig
	
	//metoda abstakcyjna do pokazywania informacji o danej maszynie
	public void showInformation()
	{
		super.showBaseInformarion();
		System.out.println("Lifting Capacity: " + liftingCapacity);
	}
	
	//klasa deklaruje ze zaimplementuje metody z intefrjsu IVehicle
	//interfejs sen ma 1 metode refueling().
	//musimy wiec ja stworzyc
	public void refueling() {
		System.out.println("Tankuje ciezarowke");
		
	}
}
