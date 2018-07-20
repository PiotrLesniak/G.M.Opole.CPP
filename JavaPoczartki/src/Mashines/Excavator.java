package Mashines;

import MyFirstPackage.IVehicle;

/*
 * Excavator dziedziczy po maszynie - czyli posaida ca³y kod maszyny
 *
 */
public class Excavator extends Mashine implements IVehicle
{
	int capacity;
	// poniewa¿ maszyna ma abstrakcyjna metode showInformation() my w klasie dziecka musimy ja stworzyc (nadpisac)
	public void showInformation()
	{
		super.showBaseInformarion();
		System.out.println("Capacity: " + capacity);
	} 
	
	//klasa deklaruje ze zaimplementuje metody z intefrjsu IVehicle
	//interfejs sen ma 1 metode refueling().
	//musimy wiec ja stworzyc
	public void refueling() { 
		System.out.println("Tankuje koparke");	
	}
}
