#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string.
 * @s1: first string 
 * @s2: second string.
 *
 * Return: Ptr_cat.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *ptr_cat;
	
	/* checking for null characters */
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	/*calculate the lenghts of s1 and s2*/
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	/* adjuts n if n exceeds the length of s2 */
	if (n >= len2)
		n = len2;
	/* allocate memory for concatenated string */
	ptr_cat = malloc((len1 + n + 1) * sizeof(char));
	if (ptr_cat == NULL)
		return (NULL);
	/* copy characters from s1 to ptr_cat */
	for (i = 0; i < len1; i++)
		ptr_cat[i] = s1[i];
	/* copy characters from s2 up to n characters to ptr_cat */
	for (j = 0; j < n; j++)
		ptr_cat[len1 + j] = s2[j];
	/* NULL terminate ptr_cat */
	ptr_cat[len1 + n] = '\0';

	return (ptr_cat);
}
