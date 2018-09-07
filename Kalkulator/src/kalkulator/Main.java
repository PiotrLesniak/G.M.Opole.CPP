package kalkulator;

import java.util.Scanner;

public class Main{
  public static void main(String[] args){
	  double a;
	  double b;

	  Scanner odczyt = new Scanner(System.in);

	  System.out.println("Podaj pierwsz¹ liczbê: ");
	  	a = odczyt.nextDouble();
	  System.out.println("Podaj drug¹ liczbê: ");
	  	b = odczyt.nextDouble();

	  System.out.println(a+"+"+b+"="+(a+b));
	  System.out.println(a+"-"+b+"="+(a-b));
	  System.out.println(a+"*"+b+"="+(a*b));
	  System.out.println(a+"/"+b+"="+(a/b));
  }
  
  //1. Przeniesc kod kalkulatora do osobnej klasy.
  //2. Zamiast wypisywaæ wszystkie mozliwe dzialania i ich wyniki 
     //zapytac uzytkownika jakie dzialanie chce zrobic i tylko to dzialanie pokazac
}