package MyFirstPackage;

public class Truck extends Mashine  implements IVehicle {
	int liftingCapacity; // udzwig
	public void showInformation()
	{
		super.showBaseInformarion();
		System.out.println("Lifting Capacity: " + liftingCapacity);
	}
	
	@Override
	public void refueling() {
		System.out.println("Tankuje ciezarowke");
		
	}
}
