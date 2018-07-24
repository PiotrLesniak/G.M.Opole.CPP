
public class BetterPerson {
	private String name;
	private String surname;
	private EyeColor eyeColor;
	private Gender gender;
	private Prefix prefix;
	
	
	public BetterPerson() {
	
		prefix = Prefix.NoPrefix;
		gender = Gender.Mail;
		eyeColor = EyeColor.unknow;
	}
	
	@Override
	public String toString() {
		String prefix = "";
		
		if(this.prefix == Prefix.NoPrefix)
		{
			if(gender == Gender.Mail)
			{
				prefix = "Mr.";
			}
			else {
				prefix = "Miss.";
			}
		}
		else
		{
			prefix = this.prefix.getValue();
		}
		
		String personFullName = prefix + " " +  name + " " + surname;
		if(eyeColor == EyeColor.unknow)
		{
			return personFullName;
		}
		return  personFullName + "ma oczy koluru " + eyeColor.toString();
	
	}




	public void setName(String name) {
		this.name = name;
	}


	public void setSurname(String surname) {
		this.surname = surname;
	}

	public void setEyeColor(String eyeColor) {
		this.eyeColor = EyeColor.parse(eyeColor);
	}


	public void setGender(Gender gender) {
		this.gender = gender;
	}

	public void setPrefix(Prefix prefix) {
		this.prefix = prefix;
	}

}
