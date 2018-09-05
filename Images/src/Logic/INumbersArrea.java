package Logic;

//interfejs ktory musi implemntowac klasa ktora jest przestrzenia do przechowywania liczb
public interface INumbersArrea {//interfejs klasy bedacej przestrzenia do ktorej algorytm spirali wklada liczby
	void setNumber(int x, int y, long number);//metoda umozliwiajaca wkladanie liczby na okreslonej pozycji
	int getSize();//wielkosc przestrzreni liczba
}
