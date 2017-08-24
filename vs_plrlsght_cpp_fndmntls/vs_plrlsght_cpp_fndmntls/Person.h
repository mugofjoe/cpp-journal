#include <string>

#ifndef _PERSON_H
#define _PERSON_H
class Person
{
private:
	std::string firstname;
	std::string lastname;
public:
	int arbitrarynumber;

public:
	Person(std::string first,
		   std::string last,
		   int arbitrary);

	~Person();
}; 
#endif // !_PERSON_H
