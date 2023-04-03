#include "main.h"

/**
 * _memset - function that fills the first n bytes of the memory area
 * @s: pointer to the destination object
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0 ; m < n ; m++)
		s[m] = b;
	return (s);
}
