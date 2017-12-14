#include "stdafx.h"
#include "Person.h"  
#include "Tweeter.h"
#include <iostream>
#include "status.h"
#include "Human.h"

using std::cout;
using std::cin;
using std::endl;

void lesson_classes(void)
{
	Person p1("Kate", "Gregory", 123);
	// p1.arbitrarynumber = 456;
}

void lesson_scope(void)
{
	Person p1("Kate", "Gregory", 123);
	{
		Person p2("Someone", "Else", 456);
	}
}

void lesson_inheritance(void)
{
	Person p1("Kate", "Gregory", 123);
	{
		Tweeter p2("Someone", "Else", 456, "@whoever");
	}
	cout << "after innermost block" << endl;
}

void lesson_inheritance2(void) 
{
	Tweeter t1("Joel", "Dazo", 123, "@mugofjoe");
}

void lesson_enum1(void)
{
	Status s = Pending;
	s = Approved;
}


void lesson_member_functions(void)
{
	Person p1("Kate", "Gregory", 123);
	{
		Tweeter p2("Someone", "Else", 456, "@whoever");
	}
	cout << "after innermost block" << endl;
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
	p1.SetNumber(124);
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
}

void lesson_operator_overload(void)
{
	Person p1("Kate", "Gregory", 123);
	Person p2("Someone", "Else", 456);
	cout << "p1 is ";
	if (!(p1 < p2))
		cout << "not ";
	cout << "less than p2" << endl;

	cout << "p1 is ";
	if (!(p1 < 300))
		cout << "not ";
	cout << "less than 300" << endl;

	cout << "300 is ";
	if (!(300 < p1))
		cout << "not ";
	cout << "less than p1" << endl;
}

void sandbox_classes(void)
{
	Human h1;
	cout << h1.GetType() << endl;

	h1.SetFirstName("Joel");
	cout << "First name is " << h1.GetFirstName();


	std::string response = "n";
	while (response != "y")
	{
		cout << "Press y to exit" << endl;
		cin >> response;
	}
}


//int main()
//{
//	// lesson_classes ();
//	// lesson_scope();
//	 lesson_inheritance();
//	// lesson_inheritance2();
//	// lesson_enum1();
//	 // lesson_member_functions();
//	// lesson_operator_overload();
//    // sandbox_classes();
//	return 0;
//}






