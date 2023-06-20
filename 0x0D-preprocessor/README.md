Macros in C are preprocessor directives that allow you to define symbolic names or constants. They are processed by the preprocessor before the compilation of the code. Macros are often used to create reusable code snippets, perform compile-time computations, and define constants or conditional compilation.

To define a macro, you can use the `#define` directive followed by the macro name and its value. Here's an example:

```c
#define PI 3.14159
#define MAX(a, b) ((a) > (b) ? (a) : (b))
```

In the above example, `PI` is defined as a macro representing the value 3.14159. The `MAX` macro takes two arguments `a` and `b` and returns the maximum value between them.

Common predefined macros in C include:
- `__FILE__`: Represents the current file name as a string literal.
- `__LINE__`: Represents the current line number as an integer.
- `__DATE__`: Represents the current date as a string in "Mmm dd yyyy" format.
- `__TIME__`: Represents the current time as a string in "hh:mm:ss" format.
- `__STDC__`: Defined as 1 when the compiler complies with the ISO Standard for C.

To include guard your header files, you can use conditional compilation directives to ensure that a header file is included only once in a compilation unit. This prevents potential issues like multiple definitions or redeclarations. Here's an example of an include guard:

```c
#ifndef HEADER_FILE_NAME_H
#define HEADER_FILE_NAME_H

// Header file contents

#endif /* HEADER_FILE_NAME_H */
```

In the above example, `HEADER_FILE_NAME_H` is a unique name for the include guard. When the header file is included for the first time, the `HEADER_FILE_NAME_H` symbol is not defined, so the subsequent code until `#endif` will be included. On subsequent inclusions, the symbol will be defined, and the code within the `#ifndef` block will be skipped.

Including the include guard in your header files ensures that they can be safely included multiple times without causing compilation errors or redefinition issues.
