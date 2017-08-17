# Variables and Fundamental Types

## Fundamental types
- Integers
	- short
	- long
	- int
	- unsigned versions of each
- Real numbers
	- float
	- double

> Most of the time just put things in `double`

- Character
	- char (8 bits)
	- unsigned char (8 bits number up to 255)
	- signed char   (7 bits number up to 127)

- Boolean
	- bool

## User defined types
- strings
- dates
- structs and classes

Assigning a `double` variable into an `int` variable drops the 
values after the decimal.


## Casting
- Compiler will convert types where they're compatible
- Warning if data might be lost
- Error if they're not compatible

By _casting_ you make your intention clear to the compiler.

> Safer casts are available once you know templates

### Suffixes to show type of literal
- `0L`  I am telling you this is a `long`

> Be aware that _overflow_ can happen silently

- Avoid using very small types for numbers








