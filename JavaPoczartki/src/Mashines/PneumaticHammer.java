package Mashines;

public class PneumaticHammer extends Mashine{

	int power;
	public PneumaticHammer(int power) {
		this.power = power;
	}
	
	//metoda abstakcyjna do pokazywania informacji o danej maszynie
	public void showInformation() {
		super.showBaseInformarion();
		System.out.println("Power: " + power);
	}
	
	//klasa nie deklaruje ze zaimplementuje metody z intefrjsu IVehicle
	//nie musimy wiec stworzyc  refueling().

}
