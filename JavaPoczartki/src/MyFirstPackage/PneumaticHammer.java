package MyFirstPackage;

import com.sun.corba.se.impl.encoding.MarshalInputStream;

public class PneumaticHammer extends Mashine{

	int power;
	public PneumaticHammer(int power) {
		this.power = power;
	}
	
	@Override
	public void showInformation() {
		super.showBaseInformarion();
		System.out.println("Power: " + power);
	}

}
