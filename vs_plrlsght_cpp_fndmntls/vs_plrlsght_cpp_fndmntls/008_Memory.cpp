#include "stdafx.h"
#include "Person.h"
#include <string>
#include <iostream>
#include <memory>
using namespace std;
//
//int _tmain(int argc, _TCHAR* arg[]) 
//{
//	Person Kate("Kate", "Gregory", 345);
//	Kate.AddResource();
//
//	Kate.SetFirstName("Kate2");
//	Kate.AddResource();
//	Person Kate2 = Kate; 
//	Kate = Kate2;
//	string s1 = Kate.GetResourceName();
//
//	Person Sam("Sam", "Smith", 529);
//	Person* pSam = &Sam;
//	pSam->AddResource();
//
//	Person* joel = new Person("Joel", "Dazo", 249);
//	delete joel;
//	joel = nullptr;
//
//	std::shared_ptr<string> sharedString = std::make_shared<string>();
//	std::shared_ptr<string> e0 = sharedString;
//
//
//	{
//		std::shared_ptr<string> f0;
//		{
//			std::shared_ptr<string> sharedString2 = std::make_shared<string>();
//			f0 = sharedString2;
//		}
//	}
//
//	
//
//	std::cout << "Finished" << endl;
//
//	return 0;
//}