#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory
 * @nmemb: number of elements in an array
 * @size: size of elements
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (m = 0 ; m < (nmemb * size) ; m++)
	{
		*((char *)(p) + m) = 0;
	}
	return (p);
}
