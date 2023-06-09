1. How to use arguments passed to your program:
The `main` function in C can accept command-line arguments. The `argc` parameter represents the number of arguments passed to the program, and `argv` is an array of strings that contains the actual argument values.

Here's an example of how to use arguments passed to your program:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc is the number of arguments
    printf("Number of arguments: %d\n", argc);

    // argv[0] is the name of the program
    printf("Program name: %s\n", argv[0]);

    // Print the rest of the arguments
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
```

When you run the program with command-line arguments, such as `./program argument1 argument2`, it will output:

```
Number of arguments: 3
Program name: ./program
Argument 1: argument1
Argument 2: argument2
```

2. Two prototypes of `main`:

The two standard prototypes for the `main` function are:

```c
int main(void);
```
This form of `main` does not accept any command-line arguments and is typically used when the program does not require or make use of command-line arguments.

```c
int main(int argc, char *argv[]);
```
This form of `main` accepts command-line arguments. The `argc` parameter represents the number of arguments, and `argv` is an array of strings containing the argument values. This is used when the program needs to process command-line arguments passed to it.

The choice of which prototype to use depends on whether your program requires command-line arguments or not.

3. How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters:

When you have a function with unused variables or parameters, you can use the `__attribute__((unused))` attribute or `(void)` casting to indicate to the compiler that you intentionally do not use those variables or parameters. This helps to avoid compiler warnings about unused variables.

Here's an example:

```c
#include <stdio.h>

void unused_variable_example() {
    int unused_variable __attribute__((unused));
    // or: (void)unused_variable;
}

void unused_parameter_example(int unused_parameter) {
    // Use the unused_parameter to avoid the warning
    (void)unused_parameter;
}

int main() {
    unused_variable_example();
    unused_parameter_example(42);

    return 0;
}
```

In the `unused_variable_example` function, the `unused_variable` is declared with the `__attribute__((unused))` attribute, indicating to the compiler that it should not generate a warning for the unused variable.

In the `unused_parameter_example` function, the unused parameter `unused_parameter` is cast to `(void)` to indicate that it is intentionally not used. This also avoids the compiler warning.

By using either the `__attribute__((unused))` attribute or `(void)` casting, you can compile functions with unused variables or parameters without generating compiler warnings about them.
