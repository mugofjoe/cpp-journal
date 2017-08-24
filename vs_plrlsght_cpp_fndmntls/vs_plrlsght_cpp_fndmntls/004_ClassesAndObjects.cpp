#include "stdafx.h"
#include "Person.h"


void lesson_classes(void)
{
	Person p1("Kate", "Gregory", 123);
	p1.arbitrarynumber = 456;
}

void lesson_scope(void)
{
	Person p1("Kate", "Gregory", 123);
	{
		Person p2("Someone", "Else", 456);
	}
}

int main(int argc, _TCHAR* argv[])
{
	// lesson_classes ();
	lesson_scope();
	return 0;
}



