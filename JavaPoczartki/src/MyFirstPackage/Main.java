package MyFirstPackage;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) {
	
		
		//Mashine m = new Mashine();
		//m.showInformation();
		Mashine m;
		m = new Excavator();
		m.showInformation();
		
		m = new Truck();
		m.showInformation();
		
		
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
	

}
