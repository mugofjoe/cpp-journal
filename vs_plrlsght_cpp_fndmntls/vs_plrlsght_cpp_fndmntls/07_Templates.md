# Templates

- C++ implements generics with templates
  - you write a piece of code once and it can be used in a variety of context
  - no runtime checks
  - resolved at compile time not at runtime
 
- Write a class or function once, for use with a variety of types
	- Average, largest, smallest and many more
  - type safe collections - and algorithms that work on them
	- Often rely on operator overloads

- Much of the Standard Library is template-based
  - Old name: Standard Template Library (STL)

<br>

## Template Functions


- Write the function with a placeholder

<pre>
template &lt;class T&gt;
T max(T& t1, T& t2)
{
return t1 < t2 ? t2 : t1;
}
</pre>

- When using the template function, the compiler may
deduce the type you're using

<pre>
max(33, 44)
max(p1, p2)
</pre>

- Explicitly specify which template function version

<pre>
max<double>(33, 2.0)  // will return double
</pre>


## Class Templates

- Write the class with a placeholder

<pre>
template &lt;class T>
class Accum
{
private:
	T total;
public:
	Accum(T start) : total(start) 
	{
	};

	T operator+=(const T& t) { return total = total + t; };
	T GetTotal() { return total; }
};
</pre>


- When using the template class, specify the type

<pre>
Accum<int> integers(0);
Accum<string> strings("");
</pre>


## Template Specialization

Here's the code I want you to generate for this
particular type.

- Sometimes a template won't work for a particular class
  - Operator or function is missing (and you can't add it)
  - Logic in the operator won't work for this case
- First choice: add the operator or function with 
the right logic

- Second choice: specialize the template
  - this means you write a version of the template
  that doesn't have the placeholder in it.
	  - it says 'here's how to specifically do
      the work I want you to do for this incompatible class


## Summary

- Templates add tremendous power to C++
  - Compile time checks mean no runtime hit
 
- Author of code that uses templates must ensure
  that types are compatible with the template chosen

- Template specializations let you handle special cases
- Many C++ developers never write a template
- All good C++ developers should use templates
	- Save development time
  - Error checking and edge cases aren't forgotten
  - Flexibility in the face of future enhancements






















