#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creaates an array
 * @size: the size of an array
 * @c: the char to assign
 * Return: pointer to array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int m;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (m = 0 ; m < size ; m++)
		str[m] = c;
	return (str);
}
