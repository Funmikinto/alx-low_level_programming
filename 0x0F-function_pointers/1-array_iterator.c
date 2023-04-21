#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * @array: array
 * @size: the size of the array
 * @action: pointer
 * Return: always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (!array || !action)
		return;
	for (m =  0 ; m < size ; m++)
		action(array[m]);
}
