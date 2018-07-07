package MyFirstPackage;

public class Excavator extends Mashine implements IVehicle
{
	int capacity;
	public void showInformation()
	{
		super.showBaseInformarion();
		System.out.println("Capacity: " + capacity);
	}
	
	public void refueling() {
		System.out.println("Tankuje koparke");	
	}
}
