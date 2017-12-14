#include <string>
#ifndef _PERSON_H
#define _PERSON_H

#include "Resource.h"
#include <memory>

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;
	std::shared_ptr<Resource> pResource;

public:
	Person(std::string first,
		   std::string last,
		   int arbitrary);

	std::string GetName() const;
	int GetNumber()  const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number;  }
	void SetFirstName(std::string firstName) { firstname = firstName; }
	bool operator<(const Person& p) const;
	bool operator<(int i) const;
	friend bool operator< (int i, const Person& p);
	void AddResource();
	std::string GetResourceName() const 
	{
		return
			pResource->GetName();
	}
	
}; 

bool operator<(int i, const Person& p);

















/***** old version ****

class Person
{
private:
std::string firstname;
std::string lastname;
int arbitrarynumber;
Resource* pResource;

public:
Person(std::string first,
std::string last,
int arbitrary);

// a copy constructor
Person(const Person& p);
~Person();
std::string GetName() const;
// Inline Functions are like Properties
int GetNumber()  const { return arbitrarynumber; }
void SetNumber(int number) { arbitrarynumber = number;  }
void SetFirstName(std::string firstName) { firstname = firstName; }
bool operator<(const Person& p) const;
bool operator<(int i) const;
friend bool operator< (int i, const Person& p);
// Copy assignment operator
Person& operator=(const Person& p);
void AddResource();
};

bool operator<(int i, const Person& p);

*********************/


#endif // !_PERSON_H
