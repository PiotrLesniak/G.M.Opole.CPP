package dictionary.version2;

public class ExampleClass {

	@Deprecated
	public int calculateSomethink(int a, int b)
	{
		return a+b;
	}
	
	//robimy nowa wqersje naszej biblioreki i zauwazamy np ze nasza funkcja kalkulujaca jest niewydajna
	//robimy nowa lepsza kalkulacje, ktora przyjuje lub zwraca co innego
	//od teraz chcemy zeby uzytkownicy uzywali tej funcji
	public int betterCalculateSomethink(int a)
	{
		return a*a;
	}
	
}
