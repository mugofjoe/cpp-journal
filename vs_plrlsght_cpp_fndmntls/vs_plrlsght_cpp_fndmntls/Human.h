#pragma once
#include <string>
class Human
{
private:
	std::string type = "Human";
	std::string firstname = "";

public:
	Human();
	
	~Human();

	std::string GetType();

	void SetFirstName(std::string name) 
	{ 
		firstname = name; 
	}

	std::string GetFirstName()
	{
		return firstname;
	}
	
};

