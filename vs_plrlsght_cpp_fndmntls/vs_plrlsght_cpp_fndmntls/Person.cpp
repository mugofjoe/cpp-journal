#include "stdafx.h"
#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string first, 
	           string last,
	           int arbitrary) : firstname(first), 
	                            lastname(last),
	                            arbitrarynumber(arbitrary)
{
	cout << "constructing " << GetName() << endl;
}

string Person::GetName() const
{
	return firstname + " " + lastname;
}

bool Person::operator<(const Person& p) const
{
	return arbitrarynumber < p.arbitrarynumber;
}

bool  Person::operator<(int i) const
{
	return arbitrarynumber < i;
}

bool operator<(int i, const Person& p)
{
	return i < p.arbitrarynumber;
}

void Person::AddResource()
{
	
	pResource.reset();               // tell the shared_ptr to let go of the Resource
    pResource = std::make_shared<Resource>("Resource for " + GetName());
	                                 // initialize a smart pointer
}








































/*****


Person::Person(string first, string last,
int arbitrary) : firstname(first), lastname(last),
arbitrarynumber(arbitrary)
{
cout << "constructing " << GetName() << endl;
}

//Person::Person(string first, string last,
//	int arbitrary) : firstname(first), lastname(last),
//	arbitrarynumber(arbitrary), pResource(nullptr)
//{
//	cout << "constructing " << GetName() << endl;
//}

//// copy constructor
//Person::Person(const Person& p) : firstname(p.firstname), lastname(p.lastname),
//	arbitrarynumber(p.arbitrarynumber),
//	pResource(new Resource(p.pResource->GetName()))
//{
//	cout << "constructing " << GetName() << endl;
//}

// Destructor
//Person::~Person() {
//	cout << "destructing " << GetName() << endl;
//	// delete pResource;
//}

string Person::GetName() const
{
return firstname + " " + lastname;
}

bool Person::operator<(const Person& p) const
{
return arbitrarynumber < p.arbitrarynumber;
}

bool  Person::operator<(int i) const
{
return arbitrarynumber < i;
}

bool operator<(int i, const Person& p)
{
// return i < p.GetNumber();

// with friend
return i < p.arbitrarynumber;
}

void Person::AddResource()
{
// if there is already an existing pResource, clean it up
// delete pResource;
// tell the shared_ptr to let go of the Resource
pResource.reset();
//pResource = new Resource("Resource for " + GetName());
// Initialize a smart pointer
pResource = std::make_shared<Resource>("Resource for " + GetName());
}



// Copy assignment operator
//Person& Person::operator=(const Person& p)
//{
//	firstname = p.firstname;
//	lastname = p.lastname;
//	arbitrarynumber = p.arbitrarynumber;
//	delete pResource;
//	pResource = new Resource(p.pResource->GetName());
//	return *this;
//}

*******/