#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that calculates and return string length
 * @string: string
 * Return: string
 */

int _strlen(char *string)
{
	int m;

	for (m = 0 ; string[m] != '\0' ; m++)
		;
	return (m);
}

/**
 * string_nconcat - function that concatenate s1 and n bytes of s2
 * @s1: sreing 1
 * @s2: string 2
 * @n: n bytes to concat
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, m, a;

	num = n;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* account for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* account for n too big */
		num = _strlen(s2);
	len = _strlen(s1) + num + 1; /* +1 to account for null pointer */
	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	if (ptr == NULL)
		return (NULL);
	for (m = 0 ; s1[m] != '\0' ; m++) /* concat */
		ptr[m] = s1[m];
	for (a = 0 ; a < num ; a++)
		ptr[m + a] = s2[a];
	ptr[m + a] = '\0';
	return (ptr);
}
