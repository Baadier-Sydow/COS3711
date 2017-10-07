## Libraries

Libraries can be packaged in 3 different ways in C++:

1. Open source package =&gt; the full source is made a available
2. Dev package =&gt; contains a lib with the header files and not the full source
3. Runtime library =&gt; only a compiled .dll and no corresponding source files

Libraries are typically inluded into the header file and class declaration as follows:

```cpp
#include <square.h>
#include <Square>
```

The linker also needs to be configured for any external packages that need to be brought in but its beyond the scope of the course.

