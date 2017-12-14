# Standard Library Smart Pointers

switching from a raw pointer to 
a shared pointer from the standard
library does away with the work
of the big three

Three smart pointers in C++11

- **shared_ptr**
	
	reference counted 
	non-intrusive
	behaves well in collections

- **weak_ptr**
		
	let's you peek at a shared_ptr
	without bumping the reference count

- **unique_ptr**

	cannot be copied (use std::move)
