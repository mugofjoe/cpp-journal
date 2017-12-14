#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int DoubleIt(const int& x)
{
	return x * 2;
}
/***
int _tmain(int argc, _TCHAR* argv[])
{
	int i = 3;
	const int ci = 3;
	i = 4;
	// ci = 4;

	int j = 10;
	int DoubleJ = DoubleIt(j);
	int DoubleTen = DoubleIt(10);

	Person Kate("Kate", "Gregory", 234);
	Kate.SetNumber(235);
	const Person cKate = Kate;
	// cKate.SetNumber(236);
	int KateNumber = cKate.GetNumber();

	// Const with Pointers

	int* pI = &i;

	// Pointer to a constant
	// int* pII = &ci;     // error
	const int* pII = &ci;  // much better

	Person* pKate = &Kate;
	Person Someone("Someone", "Else", 345);

	const int * pcI = pI;  // pointer to a const
	// *pcI = 4; // you already said that *pci points to a const
	pcI = &j; // allowed to change where it points to
	
    // Constant pointer
	int * const cpI = pI;  // const pointer
	*cpI = 4;     // you can change the value
	// cpI = &j;     // you cannot change where it points to

	// Constant pointer to a constant value
	const int * const crazy = pI;
	// *crazy = 4;
	// crazy = &j;




	return 0;
}
***/