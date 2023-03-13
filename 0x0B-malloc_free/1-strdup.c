#include <stdio.h>
#include "main.h"

/**
 * _strdup - Entry point
 * Description: The function duplicates string
 * @str: string to be used
 * Return: *sru, NULL if sru does not contain value
 */
char *_strdup(char *str)
{
int i, r = 0;
char sru;

if (str == NULL)
return (NULL);

i = 0;
while (str[i] != '\0')
i++;
sru = malloc(sizeof(char) * (i + 1));

if (sru == NULL)
for (r = 0; str[r]; r++)
sru[r] = str[r];

return (sru);
}

