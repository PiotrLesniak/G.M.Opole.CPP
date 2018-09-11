package Test;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;

import Algoritms.PrimeNumbers;
//import junit.framework.Assert;
import org.junit.Assert;


public class TestPrimeNumbers {

	@Before
	public void setUp() throws Exception {
	}

	@After
	public void tearDown() throws Exception {
	}

	@Test
	public void testPrimeNumbers() {
		PrimeNumbers primeNumbers = new PrimeNumbers();
		Assert.assertEquals(false, primeNumbers.isPrimeNumber(1));
		Assert.assertEquals(true, primeNumbers.isPrimeNumber(2));
		Assert.assertEquals(true, primeNumbers.isPrimeNumber(3));
		Assert.assertEquals(false, primeNumbers.isPrimeNumber(4));
		Assert.assertEquals(true, primeNumbers.isPrimeNumber(5));
		Assert.assertEquals(false, primeNumbers.isPrimeNumber(6));
		Assert.assertEquals(true, primeNumbers.isPrimeNumber(7));
	}

}
