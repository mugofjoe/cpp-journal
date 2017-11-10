#include <string>

#ifndef _PERSON_H
#define _PERSON_H
class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;

public:
	Person(std::string first,
		   std::string last,
		   int arbitrary);

	~Person();

	std::string GetName();

	// Inline Functions are like Properties
	int GetNumber() { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number;  }

	bool operator<(Person& p);
	bool operator<(int i);
	friend bool operator< (int i, Person& p);
}; 

bool operator<(int i, Person& p);

#endif // !_PERSON_H
