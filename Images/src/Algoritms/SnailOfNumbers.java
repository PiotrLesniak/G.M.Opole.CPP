
package Algoritms;

import Logic.INumbersArrea;

//w tej klasie jest zaimlementowany algorym wypisywania kolejnych liczba w formie spirali
public class SnailOfNumbers {

	private INumbersArrea numbersArrea;//interfejs klasy reprezentujacej 'przestrzen' do ktorej wkladamy liczby
	private int X;//zienna pomocnicza do przechowywania pozycji x ostatnio wypisanej liczby
	private int Y;//zienna pomocnicza do przechowywania pozycji y ostatnio wypisanej liczby
	long iterator;// zienna pomocnicza do przechowywania wartosci ostatnio wypisanej liczby
	enum Direction {//klasa wewnetrzna slurzaca jako parametr do metody printLine wypisujacej linie: 
		right, left, up, down
	}

	public SnailOfNumbers(INumbersArrea numbersArrea) {
		this.numbersArrea = numbersArrea; //przypisujemy obiekt kryjacy sie pod interfejsem 'INumbersArrea'
		this.iterator = 1;//ustawiamy iteratior na pierwsza liczbe = 1
	}

	//metoda w ktorej mamy wlasciwt algorytm
	public void runAlgoritm() {
		int centerPosition = (numbersArrea.getSize()-1)/2;  //obliczamy centralna pozycje dla liczby 1
		
		numbersArrea.setNumber(centerPosition, centerPosition, 1);//ustawiamy na srodku liczbe 1
		this.X = centerPosition;//ustawiamy x na srodkowa pozyche
		this.Y = centerPosition;//ustawiamt y na srodkowa pozycje
		
		for(int i=1; i<numbersArrea.getSize(); i+=2)// w petli zwiekszamy iterator o 2 bo wypisujemy r linie dla i oraz i+1
		{
			//wysujemy kolejne 4 linie
			printLine(X, Y, Direction.right,i);
			printLine(X, Y, Direction.up,i);
			printLine(X, Y, Direction.left,i+1);
			printLine(X, Y, Direction.down,i+1);
		}
		//i dodatkowo linie zakanczajaca zeby wypelnic caly obszar liczb
		printLine(X, Y, Direction.right,numbersArrea.getSize()-1);
		
		
	}

	//wypisujemy liczby w linii, podajmy x i y startowe, kierunek wypisywania liczb, oraz ile tych liczb wypisac
	public void printLine(int x, int y, Direction direction, int howLong) {

		int goOrback = 1;//ta zienna mowi czy x lib y bedzie sie zwiekszal czy zmniejszal
		
		//jezeli idziemy w lewo albo do gory to odpowiednio x lub y sie zmiejszaja, 
		//w przeciwnym wypadku sie zwiekszaja
		if (direction == Direction.left || direction == Direction.up) {
			goOrback = -1;
		}
		
		for (int i = 1; i <= howLong; i++) {
			//jezeli idziemy w lewo lub w prawo to zmienie ulega skladowa x
			if (direction == Direction.left || direction == Direction.right) {
				X = x + (i * goOrback);
				Y = y;
			}
			//jezeli idziemy do gory lub na dol to zmianie ulega skladowa y
			else if (direction == Direction.up || direction == Direction.down) {
				X = x;
				Y = y + (i * goOrback);;
			}
			iterator++;// zwiekszamy iterator o 1 (czyli ustalamy kolejna liczbe)
			numbersArrea.setNumber(X, Y, iterator);//ustawiamy kolejna liczbe na wyliczonej pozycji
		}
	}

}
