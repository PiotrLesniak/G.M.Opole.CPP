package MyFirstPackage;

public class Truck extends Mashine {
	int liftingCapacity; // udzwig
	public void showInformation()
	{
		super.showBaseInformarion();
		System.out.println("Lifting Capacity: " + liftingCapacity);
	}
}
