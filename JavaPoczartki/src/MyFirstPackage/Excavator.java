package MyFirstPackage;

public class Excavator extends Mashine
{
	int capacity;
	public void showInformation()
	{
		super.showBaseInformarion();
		System.out.println("Capacity: " + capacity);
	}
}
