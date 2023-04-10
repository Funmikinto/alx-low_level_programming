#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds
 * @argc: argument characters
 * @argv: array of listed arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int result = 0, numb, m, n, o;

	for (m = 1 ; m < argc ; m++)
	{
		for (n = 0 ; argv[m][n] != '\0' ; n++)
		{
			if (argv[m][n] > '9' || argv[m][n] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (o = 1 ; o < argc ; o++)
	{
		numb = atoi(argv[o]);
		result += numb;
	}
	printf("%d\n", result);
	return (0);
}
