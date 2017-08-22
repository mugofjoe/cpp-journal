#include "stdafx.h"
#include "Person.h"

int main(int argc, _TCHAR* argv[])
{
	Person p1("Kate", "Gregory", 123);
	{
		Person p2("Someone", "Else", 456);
	}
	return 0;
}