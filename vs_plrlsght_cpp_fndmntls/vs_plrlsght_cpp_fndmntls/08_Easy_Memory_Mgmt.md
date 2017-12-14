# Easy Memory Management

- C++11 has a nice range of smart pointers
  - They do all this work for you
  - smart pointers are objects that you
  allocate in local storage, on the stack,
	as a member variable, etc.
  - smart pointers are solid objects, not pointers
    - they have a pointer inside them
  - when the smart pointer goes out of scope,
  it's own destructor calls delete for you.
	- Imagine a template class with just one
    member variable
		- it will work with any kind of pointer
    - A T* that you got from new
  - Constructor saves the T* in the member variable
  - When it goes out of scope the destructor will
  delete that T*
	- no memory leak
 - Handle copy one of two ways
   - Prevent it (private copy constructor and copy 
   assignment operator)
	 - Have a reference count: copy increments,
   destructor decrements, delete at 0
		- there's a reference count.
 - The key thing: operator overloads  
   - star (*)
   - points to (->)
     

# `shared_ptr`

- Used as `std::shared_ptr<MyClass> pMyClass;`
- Uses `#include <memory>`

shared_ptr implements a reference counted
sharing so that when you copy or assign
a `Person` around, the new Person is pointing
to the same Resource as the old Person.

**shared_ptr.reset()**
resetting a shared pointer has it let go of
its hold on something out on the free store.
It decrements the reference count. If 
the reference count goes down to zero, it
deletes it.










  
