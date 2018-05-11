#include "stdafx.h"
#include "Koparka.h"

Koparka::Koparka()
{
}

Koparka::~Koparka()
{
}

void Koparka::setNazwa(string _nazwa)
{
	this->nazwa = new string(_nazwa);
}
void Koparka::setModel(string _model)
{
	this->model = new string(_model);
}

string Koparka::getModel()
{
	return *model;
}
string Koparka::getNazwa()
{
	return *nazwa;
}

