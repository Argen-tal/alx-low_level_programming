#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * print_to_98: the function prints all numbers from n to 98
 *
 * @n: is an integer
 */

#include <stdio.h>

void print_to_98(int n)
{
    if (n <= 98) {
        for (int i = n; i <= 98; i++) {
            printf("%d", i);
            if (i < 98) {
                printf(", ");
            }
        }
    } else {
        for (int i = n; i >= 98; i--) {
            printf("%d", i);
            if (i > 98) {
                printf(", ");
            }
        }
    }
    printf("\n");
}

