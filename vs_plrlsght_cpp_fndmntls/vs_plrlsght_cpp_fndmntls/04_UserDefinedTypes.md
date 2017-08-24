# Classes and objects

- `class` to define a class
	- Remember: there's a trailing semicolon at the end _`;`_
- inside of a class: private and public sections
	- you don't go line by line (this element is private, this element is public)
	- default is `private`
	- best practice: no public member variables
- declare an instance with same syntax as fundamental types
- access member variables and functions with dot (.)
	- static members and functions with class name and colon-colon (::)

## _`stdafx.h`_ 

This is the standard C++ precompiled header


## Header files

Tells everybody else that "this object exists". This function exists, etc.

- Other files include this header. They only need to know that the function exists.
- The implementation is done in the class file itself.


## Creating a class

Create a header file (Person.h)
- Specify the members
- Specify the constructor (but not implement it)
- Specify function signatures

Create a class (Person.cpp)
- Create a Person.cpp under Source Files folder
- Use initializer syntax when doing a parameterized constructor
	- works well if initializing a variable is expensive
		- compiler doesn't have to initialize to default and then
		initialize it again afterwards with your argument value
	- colon (:) is the initializer operator


- The values for most types in C++ are not defaulted or initialized for you.
	- It's possible for objects to have the defaulted and initialized.
	- It's not possible for integers to be initialized.

## Scope

Constructor is called when control reaches the line they're declared.

Memory is allocated for them on the stack.

Object goes out of scope usually at a }

Memory is freed and destructor runs







