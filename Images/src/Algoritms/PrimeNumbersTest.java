package Algoritms;

//klasa testowa do wyliczania liczb pierwszych
public class PrimeNumbersTest implements IPrimeNumbers {

	// w tej metodzie zwracamy true jezeli liczby to 101, 100 lub 99
	@Override
	public boolean isPrimeNumber(long value) {
		if(value == 101 || value == 100 || value == 99)
		{
			return true;
		}
		return false;
	}

}
