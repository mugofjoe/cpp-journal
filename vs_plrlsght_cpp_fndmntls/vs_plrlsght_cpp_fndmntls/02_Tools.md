# Tools

## Preprocessor directives

Examples:

`#include "stdafx.h"`

`#include <iostream>`

`#include <string>`

- goes through your code before the compiler and tweaks your
code a little bit

- it combines multiple files into one

 - if there's some functionality that you use routinely, 
 put just the definitions of that funcionality into a
 _header file_. 

 - You include that header in each file that needs it.

 ### `"stdafx.h"`

 - double quote refers to a file that is part of the solution
 we're compiling

  ### `<iostream>`

  - angle bracket refers to parts of the standard library.

  ### `::`

  - this is called the _scope resolution operator_

  ### `stdafx.h`

  - precompiled headers

  - things that you use a lot in many different places. Put them
  in here and it will speed up the compilation process












