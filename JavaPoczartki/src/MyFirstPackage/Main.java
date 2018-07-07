package MyFirstPackage;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) {
		Saiving saiving = new FileSaiving();
		
		
		
		//System.out.println("  *");
		//System.out.println(" ***");
		//System.out.println("*****");
		//System.out.println("  #");
		saiving.save();
		
		System.out.println("");
		
		//Mashine m = new Mashine();
		//m.showInformation();
		
		
		
		Excavator excavator= new Excavator(); 
		Truck truck= new Truck();
		PneumaticHammer pneumaticHammer = new PneumaticHammer(100);
		
		Mashine[] mashines = new Mashine[3];
		mashines[0] = excavator; 
		mashines[1] = truck; 
		mashines[2] = pneumaticHammer; 
		
		IVehicle[] vehicles = new IVehicle[2];
		vehicles[0] = excavator;
		vehicles[1] = truck;
		
		showInformation(mashines);
		refueling(vehicles);
		
		Object o = new Excavator();
		
		
		
		
		//typy proste	
		int prosyInt;
		char prostyZnak;
		boolean prostyBoolean;
		float prostyFloat;
		short prostyShort;
		double prostyDouble;
		
		Boolean b = new Boolean(false);
		Double d = new Double(5);
		Double d2 = d;
		
		d = null;
		d2 = null;
		
		
		Integer obirktIntiger = new Integer(3);
		
		System.out.println("pierwszy program");
		System.out.println(d);
		
		
		 BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	        
		 System.out.print("Enter String");
	        	try {
					String s = br.readLine();
				} catch (IOException e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
			
	        
	        	
	        	System.out.print("Enter Integer:");
	        
	            try {
					int i = Integer.parseInt(br.readLine());
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
	        
	}
	
	public static void showInformation(Mashine[] mashines)
	{
		for(int i=0; i<mashines.length; i++)
		{
			mashines[i].showInformation();
		}
	}

	public static void refueling(IVehicle[] vehicle)
	{
		for(int i=0; i<vehicle.length; i++)
		{
			vehicle[i].refueling();
		}
	}
	
}
