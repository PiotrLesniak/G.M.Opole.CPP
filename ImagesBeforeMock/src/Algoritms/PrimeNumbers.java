package Algoritms;

import java.util.*;

public class PrimeNumbers implements IPrimeNumbers {
	
	List<Long> primeNumbers = new LinkedList<Long>();
		
	public boolean isPrimeNumber(long value)
	{
		if(value == 1)
		{
			return false;
		}
		if(value == 2)
		{
			primeNumbers.add(new Long(2));
			return true;
		}
		else if(this.isPrime(value)) 
		{
			primeNumbers.add(new Long(value));
			return true;
		}
		
		return false;
	}
	
	private boolean isPrime(long value)
	{
		Collection<Long> collection = this.primeNumbers;
		for (Long object : collection) {
			if(value % object.intValue() == 0)
			{
				return false;
			}
		}
		return true;
	}
	
	
	
}
