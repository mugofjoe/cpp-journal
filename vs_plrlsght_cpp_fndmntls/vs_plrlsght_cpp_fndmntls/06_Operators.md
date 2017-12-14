# C++ Operators

-	`x += 2` is the same as `x = x + 2`

Prefix and Postfix Operators

`i++` returns the old value of i and then increments it.
`++i` increments i first and then returns the new value

Modulo - remainder after dividing

`17 % 2 is 1`

- Used to test whether or not something is a multiple
	- if the modulo expression returns a zero then the 
	second operand is a multiple of the first operand

There is no "power of" or exponent operator

The C++ way of including a function inside an if condition:

int p;
if (p = foo("whatever"))
{
	something();
}


## Operator overloading

User defined types can do everything fundamental types can do

`int i = j + 3;`

`Order newOrder = oldOrderr + newItem;`

Author of the class writes a function that defines the operator for the class

- Usually a member function
- Occasionally a free function that takes an instance of the class
	- if the class is not available to you as developer
	- if the first item is not a class (like an integer)

- string plus symbol is an overload
- Collections have iterators like ++ mobes to the next item in the collection

### Writing an overlaod

Two ways to write an overload

1. As member function of whatever type is before the operator and
the function takes an instance of the type that's after the operator

2. As a free function (not in any class) that takes two parameters:
the type before the operator and the one after the operator

- `myObject < something`
	- bool MyClass::operator<(OtherType something)
	- can operate on two MyClass objects or different types

- `something < myObject`
	- bool operator<(OtherType something, MyClass mc)
	- Free function
	- Access member variables of MyClass through public functions
	- or be declared a friend
		- friend allows access to a private variable where there 
		are no public properties exposed by the class
		- friend is declared in the header file (.h)









