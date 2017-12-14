#include "stdafx.h"
#include "Person.h"
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* arg[]) 
{
	Person Kate("Kate", "Gregory", 345);
	Kate.AddResource();

	Kate.SetFirstName("Kate2");
	Kate.AddResource();
	Person Kate2 = Kate; 
	Kate = Kate2;
	string s1 = Kate.GetResourceName();

	Person Sam("Sam", "Smith", 529);
	Person* pSam = &Sam;
	pSam->AddResource();



	

	return 0;
}