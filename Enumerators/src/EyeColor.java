/*
 * Enumeraror EyeColor pozwala przechowywac wybrane kolory oczu 
 * Enumerator ten dodatkowo wyposarzony jest w metode parse 
 */
public enum EyeColor {
	blue, brown, grey, green, unknow;
	
	/*
	 * Metoda ta pobiera napis i zwraca obiekt enumeratora klasy: EyeColor
	 * je¿eli string ktory podany do funkcji bedzie identyczny z jednym z 'wartosci' enumeratora,
	 *  to zostanie zwrocowny obiekt enumeratora z wybrana t¹ opcj¹
	 *  w przeciwnym wypadku zostanie zwrocony obiekt z wyrbana opcja 'unknow'
	 */
			
	public static EyeColor parse(String s)
	{
		try {
			//funckaj statyczna valueOf dziala jak nasza metoda parse (patrz opis)
			//tylko ze w przypadku gdy do funkcji bedzie podany string NIE identyczny z jednym z wartosci enumeratora,
			//to rzucony zostanie wyjatek bedacy obiektem klasy: java.lang.IllegalArgumentException
			return EyeColor.valueOf(s.toLowerCase());	
		} 
		catch(java.lang.IllegalArgumentException e) // jezeli zostal rzucony wyjarek to ustawiamy nasza klase enumertora na 'unknow'
		{
			return EyeColor.unknow;
		}
	}
	
}
