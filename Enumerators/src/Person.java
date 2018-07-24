
public class Person {
	private String name;
	private String surname;
	private String hairColor;
	private String eyeColor;
	private String gender;
	private String maritalStatus;
	private String prefix;
	private String profession;
	
	
	public Person()
	{
		
	}


	
	
	@Override
	public String toString() {
		String prefix = "";
		
		if(this.prefix.equals("BRAK"))
		{
			if(gender.equals("M"))
			{
				prefix = "Mr.";
			}
			else {
				prefix = "Miss.";
			}
		}
		else
		{
			prefix = this.prefix;
		}
		return prefix + " " +  name + " " + surname + " ma oczy koluru " + eyeColor;
	
	}




	public void setName(String name) {
		this.name = name;
	}


	public void setSurname(String surname) {
		this.surname = surname;
	}


	public void setHairColor(String hairColor) {
		this.hairColor = hairColor;
	}


	public void setEyeColor(String eyeColor) {
		this.eyeColor = eyeColor;
	}


	public void setGender(String gender) {
		this.gender = gender;
	}


	public void setMaritalStatus(String maritalStatus) {
		this.maritalStatus = maritalStatus;
	}


	public void setPrefix(String prefix) {
		this.prefix = prefix;
	}


	public void setProfession(String profession) {
		this.profession = profession;
	}

	


	
	
	
	
	
	
}
