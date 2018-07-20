package MyFirstPackage;

import java.io.IOException;
import Exceptions.IncorectYearException;
import Mashines.Excavator;
import Mashines.Mashine;
import Mashines.PneumaticHammer;
import Mashines.Truck;

public class Main {

	public static void main(String[] args) {
	
	
		
		Menu menu = new Menu();
		//menu.showMenu();
		
		//Saiving saiving = new FileSaiving();
		
		 
		
		//System.out.println("  *");
		//System.out.println(" ***");
		//System.out.println("*****");
		//System.out.println("  #");
		//saiving.save();
		
		System.out.println("");
		
		//Mashine m = new Mashine();
		//m.showInformation();
		
		
		
		Excavator excavator= new Excavator(); 
		Truck truck= new Truck();
		PneumaticHammer pneumaticHammer = new PneumaticHammer(100);
		
		try {
			truck.ReadYear();
		} 
		
		catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IncorectYearException e) {
			System.out.println("Podano niepoprawny rok ("+ e.getYear() + ")");
		}
		
		Mashine[] mashines = new Mashine[3];
		mashines[0] = excavator; 
		mashines[1] = truck; 
		mashines[2] = pneumaticHammer; 
		
		IVehicle[] vehicles = new IVehicle[2];
		vehicles[0] = excavator;
		vehicles[1] = truck;
		
		showInformation(mashines);
		showInformation(null);
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
