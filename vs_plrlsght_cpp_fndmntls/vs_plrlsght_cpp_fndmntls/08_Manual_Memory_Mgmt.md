# Manual Memory Management

- if you are responsible for a pointer
you have to keep track of it
	- at some point you must call delete
- What happens if someone copies your pointer?
- What happens if the local variable (the pointer) 
goes out of scope early?
	- you don't have the pointer anymore call delete with.
- Manual memory management is hard, with a variety of 
mistakes to make
  - Delete too soon
  - Delete twice
  - Never delete (memory leak)

#### Rule of Three

if you write a destructor that really does
somethin bad (delete does not just gives the memory
back it also runs the destructor), you should also write

- Copy Constructor
- Copy Assignment Operator
- Destructor
