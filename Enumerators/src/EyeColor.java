
public enum EyeColor {
	blue, brown, grey, green, unknow;
	
	public static EyeColor parse(String s)
	{
		try {
			return EyeColor.valueOf(s.toLowerCase());	
		} 
		catch(java.lang.IllegalArgumentException e)
		{
			return EyeColor.unknow;
		}
	}
	
}
