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
	int GetNumber() { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number;  }
}; 
#endif // !_PERSON_H
