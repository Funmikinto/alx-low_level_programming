#include "main.h"
#include <stdlib.h>

/**
 * count_word - function to count the number of words in a string
 * @s: string
 * Return: NULL if function fails
 */

int count_word(char *s)
{
	int flag, m, n;

	flag = 0;
	n = 0;

	for (m = 0 ; s[m] != '\0' ; m++)
	{
		if (s[m] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			n++;
		}
	}
	return (n);
}

/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: NULL if function fails
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int m, n = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (m = 0 ; m <= len ; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (c)
			{
				end = m;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[n] = tmp - c;
				n++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = m;
	}
	matrix[n] = NULL;
	return (matrix);
}
