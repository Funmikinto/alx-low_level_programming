#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: input
 * Return: first occurence of a character
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0 ; s[m] >= '\0' ; m++)
	{
		if (s[m] == c)
		{
			return (&s[m]);
		}
	}
	return (0);
}
