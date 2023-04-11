#include "main.h"
#include <stdlib.h>

/**
 * _strdup - fucntion that duplicates to a new memory space
 * @str: char parameter
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int m, n = 0;


	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;
	aaa = malloc(sizeof(char) * (m + 1));
	if (aaa == NULL)
		return (NULL);

	for (n = 0 ; str[n] ; n++)
		aaa[n] = str[n];
	return (aaa);
}
