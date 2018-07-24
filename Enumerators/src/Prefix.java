
public enum Prefix {
	
	Profesor("prof."), Doctor("dr"), Engineer("in¿."), NoPrefix("");
		
	Prefix(String value)
	{
		this.value = value;
	}
	
	private String value;

	public String getValue() {
		return value;
	}
	
	
	
	
	
}
