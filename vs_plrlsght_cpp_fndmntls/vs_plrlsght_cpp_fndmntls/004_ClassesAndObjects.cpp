#include "stdafx.h"
#include "Person.h"  
#include "Tweeter.h"
#include <iostream>
#include "status.h"

using std::cout;
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


int main(int argc, _TCHAR* argv[])
{
	// lesson_classes ();
	// lesson_scope();
	// lesson_inheritance();
	// lesson_inheritance2();
	// lesson_enum1();
	lesson_member_functions();
	return 0;
}




