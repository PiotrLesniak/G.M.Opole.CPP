package Logic;

//klasa testowa ktora umozliwia testowanie algorytmu spirali poprzez wypisanie calej przesterzni liczb
public class TestNumbersArrea implements INumbersArrea{
	long arrayInt[][];//tutaj trzymane sa liczby

	public TestNumbersArrea() {
		this.arrayInt = new long[11][11];//trzoymy tablice liczba
	}

	//metoda do wypisywania liczb
	public void print() {
		for (int y = 0; y < 11; y++) {
			for (int x = 0; x < 11; x++) {
				if(this.arrayInt[y][x] < 10)
				{
					System.out.print(' ');
				}
				System.out.print(this.arrayInt[y][x] + ", ");
			}
			System.out.println();
		}
	}
	
	public long[][] GetArray()
	{
		return this.arrayInt;
	}

	//implementacja metody ktora wymaga interfejs
	//sluzy do wkladania liczby do okreslonej pozycji
	@Override
	public void setNumber(int x, int y, long number) {
		this.arrayInt[y][x] = number;
		
	}

	//implementacja metody ktora wymaga interfejs
	//zwraca dlugosc 'boku tablicy' liczb
	@Override
	public int getSize() {
		return 11;
	}

}
