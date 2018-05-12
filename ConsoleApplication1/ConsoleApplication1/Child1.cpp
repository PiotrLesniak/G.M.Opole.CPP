#include "stdafx.h"
#include "Child1.h"
#include <iostream>

using namespace std;

Child1::Child1()
{
	cout << "I am child 1 - konstruktor" << endl;
}

void Child1::MyMethod()
{
	cout << "I am child 1" << endl;
}

Child1::~Child1()
{
}
