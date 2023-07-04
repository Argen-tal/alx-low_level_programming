# Singly Linked List Project

## Overview
This project implements a singly linked list data structure in C. The singly linked list is a linear data structure where each element contains a value and a pointer to the next element in the list.

## Features
- Creation of an empty linked list
- Insertion of elements at the beginning, end, or at a specific position in the list
- Deletion of elements from the list
- Searching for elements in the list
- Traversing the list and printing its contents
- Checking if the list is empty
- Getting the length of the list

## Usage
To use this singly linked list implementation, follow these steps:

1. Clone the repository to your local machine.
2. Include the necessary header files in your project.
3. Compile the source files using a C compiler.
4. Link the object files with your program.
5. Use the provided functions to perform various operations on the linked list.

## Example

```c
#include <stdio.h>
#include "singly_linked_list.h"

int main() {
    // Create a new linked list
    LinkedList* list = createLinkedList();

    // Insert elements into the list
    insertAtBeginning(list, 10);
    insertAtEnd(list, 20);
    insertAtPosition(list, 30, 1);

    // Print the contents of the list
    printf("List: ");
    printList(list);

    // Delete an element from the list
    deleteElement(list, 20);

    // Search for an element in the list
    int searchResult = searchElement(list, 30);
    if (searchResult != -1) {
        printf("Element found at index %d\n", searchResult);
    } else {
        printf("Element not found in the list\n");
    }

    // Get the length of the list
    int length = getListLength(list);
    printf("Length of the list: %d\n", length);

    // Check if the list is empty
    if (isEmpty(list)) {
        printf("List is empty\n");
    } else {
        printf("List is not empty\n");
    }

    // Free the memory occupied by the list
    freeLinkedList(list);

    return 0;
}
```

## Contributing
If you want to contribute to this project, feel free to fork the repository and submit a pull request. Your contributions are highly appreciated!

## Contact
For any questions or suggestions, please feel free to reach out to me at [calpeacebringer@gmail.com)

Enjoy using the Singly Linked List Project!
