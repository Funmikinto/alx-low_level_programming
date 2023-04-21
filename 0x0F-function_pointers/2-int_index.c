#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer
 * Return: always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		for (m = 0 ; m < size ; m++)
		{
			if (cmp(array[m]) != 0)
				return (m);
		}
	}
	return (-1);
}
