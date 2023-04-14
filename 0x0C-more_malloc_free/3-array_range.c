#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: 0
 */

int *array_range(int min, int max)
{
	int range, m;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);
	range = ((max + 1) - min);
	p = malloc(range * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (m = 0 ; m < range ; m++)
	{
		*(p + m) = min + m;
	}
	return (p);
}
