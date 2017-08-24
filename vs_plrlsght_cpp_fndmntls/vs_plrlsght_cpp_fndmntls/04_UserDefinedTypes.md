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

### RAII 

- Resource Acquisition is Initialization
- Acquire resources in the constructor
- Release them in the destructor
- Example: open/close file, database connection, etc.


## `struct`

- like a class
- a user-defined type
- used for POD or plain old data with little or no business logic
- can have member functions, constructor, destructor
- _Difference_ is default access is `public`


## Inheritance

- Derived classes can add or override member variables and functions

## Namespaces

- Prevent name collisions
- Separate from class name with :: operator
- _DON'T USE `using namespace ...` in the header file!

### _using_

Instead of typing `std::cout` every time, use:

	`using std::cout;`

So you can just type:
	
	`cout << "blah blah blah"`

Or just use the entire namespace:

	`using namespace std;`

So you can just type:

	`string lastname` instead of `std::string lastname`


## Enum

- Give naames to a set of constants
- Names must be unique
	- Cannot do `myenum.Pending`


## PreProcessor

- Lines that start # are pre-processor directives
	- `#include`

- Can use to compile slightly different code under different circumstances
	- Example: "a debug build"

- Can also use for convenience
	- Include guards 
		- with `#ifndef` `#endif` and `#define`
		- This is a standard
	- `#pragma once`
		- another approach
		- It says: This particular file should only be included once in each 
		compilation unit.






