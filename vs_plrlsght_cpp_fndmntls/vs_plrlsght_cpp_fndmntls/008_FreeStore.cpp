#include "stdafx.h"
#include "Resource.h"
#include <string>
using namespace std;

/***
int _tmain(int argc, _TCHAR* arg[])
{
	// create a Resource object locally on the stack
	{
		Resource localResource("local");
		string localstring = localResource.GetName();
	}
	// create a Resource object on the Free Store
	// the operator new that gives back a Resource pointer
	// which we put into the Resource variable pResource

	Resource* pResource = new Resource("created with new");

	// use the arrow notation to call a member function GetName()
	string newString = pResource->GetName();
	
	// MEMORY LEAK
	//int j = 3;
	//if (j==3)
	//{
	//	return 0;  
	//	// we exited out of the program
	//	// we constructed pResource but never destructed it: Memory Leak!
	//}

	// BAD THING
	// make a copy of pResource
	Resource* p2 = pResource;
	string string2 = p2->GetName();  // it's still working
	delete pResource;

	// use a pointer that you just called delete on
	// string string3 = pResource->GetName();   // pResource has already been deleted!
	// pResource = nullptr;
	// delete pResource;
	// delete p2;  // p2 has already been deleted earlier


}
***/
