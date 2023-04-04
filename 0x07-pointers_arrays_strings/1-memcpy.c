#include "main.h"

/**
 * _memcpy - function that copies bytes from memory area
 * @dest: pointer to the destination object
 * @src: pointer to the source object
 * @n: number of bytes to copy
 * Return: value of destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0 ; m < n ; m++)
		dest[m] = src[m];
	return (dest);
}
