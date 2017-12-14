#include "Human.h"
#include <iostream>
#include "stdafx.h"
using namespace std;

Human::Human()
{
	cout << "constructing " << GetType() << endl;
}


Human::~Human()
{
}

string Human::GetType()
{
	return type;
}