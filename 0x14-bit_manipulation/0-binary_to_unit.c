#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: The binary string to convert.
 *
 * Return: The converted unsigned integer or 0 if an invalid character is encountered.
 */
unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
return (0);

unsigned int result = 0;

for (int i = 0; b[i] != '\0'; i++) {
if (b[i] == '0')
{
result <<= 1;  /* Shift left by 1 (multiply by 2) */
}
else if (b[i] == '1') {
result <<= 1;  /* Shift left by 1 */
result |= 1;   /* Set the least significant bit to 1 */
}else
{
/* Invalid character encountered (not '0' or '1') */	    
return (0);
}
}
return (result);
}

