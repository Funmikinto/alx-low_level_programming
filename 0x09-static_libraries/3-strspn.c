#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: string to be searched
 * @accept: string to be measured
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int n;

	while (*s)
	{
		for (n = 0 ; accept[n] ; n++)
		{
			if (*s == accept[n])
			{
				m++;
				break;
			}
			else if (accept[n + 1] == '\0')
			return (m);
		}
		s++;
	}
	return (m);
}
