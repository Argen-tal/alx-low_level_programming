1. Difference between automatic and dynamic allocation:
   - Automatic allocation: Memory for variables declared within a function or a block is automatically allocated and deallocated by the compiler. It is typically done on the stack and is limited in size.
   - Dynamic allocation: Memory is allocated explicitly at runtime using functions like `malloc`, `calloc`, or `realloc`. It allows for more flexibility in managing memory and is typically done on the heap. The allocated memory remains until it is explicitly freed.

2. `malloc` and `free`:
   - `malloc`: It stands for "memory allocation." It is a function in C that dynamically allocates a specified number of bytes of memory and returns a pointer to the first byte of the allocated memory.
   - `free`: It is a function that deallocates the previously allocated memory block, making it available for reuse. It should be used when you are done using dynamically allocated memory to prevent memory leaks.

3. Using `malloc`:
   - Syntax: `void *malloc(size_t size);`
   - Example:
     ```c
     int *ptr = malloc(sizeof(int)); // Allocating memory for a single int
     if (ptr != NULL) {
         // Memory allocation successful
         *ptr = 10; // Assigning a value to the allocated memory
     }
     ```

4. Using `valgrind` to check for memory leaks:
   - `valgrind` is a powerful tool used for memory profiling and debugging. To check for memory leaks, you can use the following command:
     ```
     valgrind --leak-check=full ./your_program
     ```
   - `valgrind` will run your program and provide a detailed report of any memory leaks or errors encountered during execution.

   It's important to note that `valgrind` is a command-line tool and should be installed on your system before use. Additionally, it is typically used on Unix-like systems, such as Linux or macOS.
