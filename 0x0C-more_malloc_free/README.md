The `exit` function is used to terminate a program and return control to the operating system. It allows you to explicitly exit from anywhere within your program. Here's how to use it:

```c
#include <stdlib.h>

int main() {
    // Code execution

    if (condition) {
        // If condition is met, exit the program
        exit(0); // or exit(EXIT_SUCCESS)
    }

    // Code execution

    // If reached here, exit the program with an error
    exit(1); // or exit(EXIT_FAILURE)
}
```

The `exit` function takes an integer argument that serves as the program's exit status. Conventionally, a return value of 0 indicates successful execution, while a non-zero value indicates an error or abnormal termination.

Now, let's discuss `calloc` and `realloc`:

- `calloc` is a function used to dynamically allocate memory in C. It is similar to `malloc`, but it initializes the allocated memory block to zero. The syntax of `calloc` is as follows:

  ```c
  #include <stdlib.h>

  void *calloc(size_t num_elements, size_t element_size);
  ```

  The `num_elements` parameter specifies the number of elements to allocate, and the `element_size` parameter specifies the size of each element in bytes. The `calloc` function returns a pointer to the allocated memory block, or `NULL` if the allocation fails.

- `realloc` is used to resize a previously allocated memory block. It allows you to increase or decrease the size of the block. The syntax of `realloc` is as follows:

  ```c
  #include <stdlib.h>

  void *realloc(void *ptr, size_t new_size);
  ```

  The `ptr` parameter is a pointer to the previously allocated memory block, and `new_size` specifies the new size in bytes. The `realloc` function returns a pointer to the resized memory block. If the allocation fails, it returns `NULL`. It's important to note that the contents of the original memory block are preserved during reallocation whenever possible.

Both `calloc` and `realloc` are useful for managing dynamic memory allocation in your programs, allowing you to allocate or resize memory as needed. Remember to check the return values of these functions to handle any potential allocation failures.
