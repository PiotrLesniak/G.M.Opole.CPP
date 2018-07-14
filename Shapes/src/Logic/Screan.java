package Logic;

public class Screan implements IScreanForShapes, IScrean{

	//private int height;
	//private int width;
	private char[][] pixels;
	
	public Screan(int width, int height)
	{
		//this.width = width;
		//this.height = height;
		this.pixels = new char[height][width];
	}

	@Override
	public void setPixel(int x, int y, char color) {
		this.pixels[y][x] = color;
	}

	@Override
	public void printToConsole() {
		for(int y=0; y<this.pixels.length; y++)
		{
			for(int x=0; x<this.pixels[y].length; x++)
			{
				System.out.print(this.pixels[y][x]);
			}
			System.out.println();
		}
	}

	@Override
	public void clearMemory() {
		for(int y=0; y<this.pixels.length; y++)
		{
			for(int x=0; x<this.pixels[y].length; x++)
			{
				this.pixels[y][x] = ' ';
			}
		}
	}

	@Override
	public void clearConsole() {
		for(int y=0; y<this.pixels.length; y++)
		{
			for(int x=0; x<this.pixels[y].length; x++)
			{
				System.out.print(' ');
			}
			System.out.println();
		}
		
	}
}
