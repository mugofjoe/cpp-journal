# Const

it means that you promise that you won't change
a value

- a way to commit to the compiler you
won't change something.

- when declaring a local variable

<pre>
const int zero = 0;
</pre>

- as a function parameter

<pre>
int foo(const int i)
int something(const Person& p)
</pre>

- Modifier on a member function

<pre>
int GetName() const;
</pre>

- `const` correctness can be difficult

If you have a function that accepts a reference
variable as a parameter and you'd like to allow
it to also accept literal values, then use 
a `const` keyword on the parameter signature.

<pre>
int DoubleIt(const int& x)
{
	return x * 2;
}

// passing in a literal 10
int DoubleTen = DoubleIt(10);
</pre>

# Const with Pointers

### Constant Pointer
- you can declare the pointer as a constant pointer
  - you cannot change it to point somewhere else

		int * const cpI

### Pointer to a Constant
- Or that it points to something const
  - you can't use it to change the value of the target

		const int* cpI
    
- Or both, if you really want to

		const int * const crazy










