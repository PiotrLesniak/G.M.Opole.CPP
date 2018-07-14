package Shapes;

import Logic.IScreanForShapes;

public class Triangle {
	
	int hight;
	IScreanForShapes screan;
	public Triangle(int hight, IScreanForShapes screan)
	{
		this.hight = hight;
		this.screan = screan;
	}
	
	public void print(int x, int y)
	{
		int coutnOfPixelsInLine = 1;
		//wysokosc 4
		int start = this.hight -1;
		for(int i=0 ; i< hight; i++)
		{
			printLine(start, coutnOfPixelsInLine, i, x-1, y-1);
			start--;
			coutnOfPixelsInLine+=2;
		}
		
		//printLine(3, 1, 0);
		//printLine(2, 3, 1);
		//printLine(1, 5, 2);
		//printLine(0, 7, 3);
	}
	
	private void printLine(int start, int length, int linia, int x, int y)
	{
		for(int i=0; i<length; i++)
		{
			this.screan.setPixel(x+start+ i, y+linia, '*');
		}
	}
	
}

// zawsze zaczynamy od 1 gwiazdki
// kazda kolejna linijka ma 2 * wiecej
// spacje = poczatkowa ilosc to wysokoc - 1
// ilosc spacji zmniejsza sie o 1 

//   *
//  ***
// *****
//*******
