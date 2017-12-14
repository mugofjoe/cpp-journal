# The Free Store

### Local variables

- in the stack
- go out of scope when they hit the brackets

### Free store variables

- heap or something else other than stack
- longer-lived variables
- Create with `new` operator
  - Returns a pointer to the object or instance
  - Uses a constructor to initialize the object
- stays in the free store forever
- Tear down with `delete`
  - Uses the destructor to clean up the object
- Slightly different syntax for "raw arrays"
  - But modern C++ avoids "raw arrays"


|  |  |
|--------|----------------------|
| Local variables   | Stack                  |
| Global variables | Free Store or Heap                 |

