#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 * Return: a pointer to a byte that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0 ; accept[m] ; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
