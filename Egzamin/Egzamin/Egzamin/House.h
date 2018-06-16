#pragma once
class House
{
	char *Type;
	int Number;
public:
	House();
	House(char*, int);
	House(const House&);
	const House& operator = (const House&);
	void SetType(char*);
	char* GetType();
	void SetNumber(int);
	int GetNmber();
	virtual void Print();
	virtual void Input();
	~House();
};

