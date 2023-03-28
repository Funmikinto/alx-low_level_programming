#include "main.h"

/**
 * _strlen - write a funtion that returns the length of a string
 * @s: string whose length to be printed
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}

