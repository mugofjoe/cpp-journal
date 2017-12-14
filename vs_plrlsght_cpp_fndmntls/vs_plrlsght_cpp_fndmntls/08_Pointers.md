# Pointers

A **pointer** is a variable that holds the address of 
another variable
- you can use the address to go through the pointer
to get to the original place that it is pointing to
- you can change the pointer to point somewhere else
- you can use the pointer to change the value that it points at

One way to get a pointer: & operator
 - take the address of an existing variable
 - The _&_ is called an _address of_ operator

<pre>
int A = 7;
&A
</pre>

&A means take the address of the variable A. It returns
a pointer to that integer.

When the ampersand is before a variable, it means
"Please take the address of this instance A"

When the ampersand is at the end of a type, it means
"This is an integer reference or an Employee reference..."

<pre>
int myInt = 100;
int& A = myInt;
A = 200;
</pre>

`int& A` - A is an integer reference that takes
an lvalue (variable) called `myInt`.

Since `A` is an integer reference, if we 
assign a value (200) to A, it also changes
the underlying variable's value `myInt`.
`myInt` becomes 200 as well.

<pre>
int A = 100;
int* pA = &A;
int  *pA = &A;
</pre>

I'm declaring an integer pointer called `pA` and I'm
initializing it with the address of that integer `A`.

Second one reads: An integer is the contents of
`pA` and I'm initializing `pA` with the address of `A`.

When you see an asterisk with a type, you're 
declaring a pointer.

When you see an ampersand before an instance of 
a variable, you're taking the address of a variable
which gets you a pointer, which you can put in
some other pointer variable.

## How to use a pointer

- To get through the pointer to 
its target use the <b>*</b> operator.

<pre>
*pA = 5;
</pre>

Take that pointer and go follow that value. So if there's
a memory location value 123456 in *pA it would go to 
memory location 123456 and that's where it would put 
the value 5.

The pointer is still pointing to the same place
but we went through the pointer to get to its target.

When the target is an object rather than an integer,
you have to use parentheses.

<pre>
(*p).MyMemberVariable
</pre>

- Developer nees to assign a value for not pointing to anything

  - Pointers are not always initialized to be pointing
to something. It's not always initialized to contain
a value that is somebody's address.

  - a NULL pointer
    - 0
    - NULL
    - nullptr(C++11)

A **reference** is an alias for something else
- can only set its target when declaring it
- all other actions go through the reference to its target
- anything you do to a reference, you're doing to the target.

You can change a pointer to point to a different place.
You can't do that with references.








</pre>















