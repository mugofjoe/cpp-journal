#include "stdafx.h"
#include "Resource.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Resource::Resource(string n) :name(n)
{
	cout << "constructing Resource object: " << name << endl;
}

Resource::~Resource(void)
{
	cout << "destructing Resource object: " << name << endl;
}