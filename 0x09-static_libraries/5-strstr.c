#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the pointer to the string to be searched
 * @needle:  the pointer to the substring to search for
 * Return: to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *m != '\0')
		{
			m++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}

