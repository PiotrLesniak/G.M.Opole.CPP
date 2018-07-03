package MyFirstPackage;

public abstract class Mashine {
	private int number;
	private int yearOfProduction;
	private String name;
	
	public abstract void showInformation();
	
	protected void showBaseInformarion()
	{
		System.out.println(this.getClass().getName());
		System.out.println("Name:"+ name);
		System.out.println("Number:"+ number);
		System.out.println("Year of production:"+ yearOfProduction);	
	}
	
	
}
