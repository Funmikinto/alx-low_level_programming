#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion that prints the minimum number of coins
 * @argc: argument parameter
 * @argv: argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int numb, m, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	numb = atoi(argv[1]);
	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0 ; m < 5 && numb >= 0 ; m++)
	{
		while (numb >= coins[m])
		{
			numb -= coins[m];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
