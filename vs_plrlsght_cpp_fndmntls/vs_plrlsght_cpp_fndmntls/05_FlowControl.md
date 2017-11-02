# Flow Control

## IF

### Standard constructs 

- if
- while
- return
- call a function

### Different in C++

- for
- switch
- immediate if
- break
- goto

## WHILE

- Check is before first time it runs
	- may not run at all
	- exit early using `break`


## FOR

- Loop expression
	- condition is always done at the very last
	- change the value used in the condition

## SWITCH

- Expression and values must be integral type or enum

## Functions

- Declare before you use
	- Include header in multiple places
- Implement once
	- in a file with .cpp

- Free functions
	- global functions
	- does not use the dot syntax

- Return 
	- return nothing
	- by value - a copy is made (expensive)
	- by reference
		- beware: _Dangling Reference_
		- use the & symbol

Pass by reference

	`bool Is2MorePrime(int& x);`

## Member Functions

- Must have a return type

### Inline Function
When the implementation for a function is written right in the header file,
they are are called _inline functions_

# Understanding Error Messages

- When you call a function, two different checks are made
	- Have you declared (usually in a .h) that function?
		- compiler only cares that you declared the function
	- Have you implemented (usually in a .cpp) that function?
		- linker

- Different mistakes, different errors
	- Typed the function name wrong
	- Passed the wrong number of parameters
	- Passed the wrong type of parameter
	- Mistake declaring (.h)
		- When you get a lot of errors, __just fix the first one__.
	- Mistake implementing
	- Declared but forgot to implement (in .cpp)
		- Linker errors (LNK)
			- missing implementations
			- "unresolved external symbol"
	- Forgot to include the right header file
		- You get error messages in places that includes that header file.
	- Forgot to include header in the implementtion file (.cpp)
	- Forgot to add implementation file to project

## Immediate If

`result = somecondition? 7 : 302;`



