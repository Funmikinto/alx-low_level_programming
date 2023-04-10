#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * @argc: argument parameter
 * @argv: array of argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int result, numb1, numb2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);
	result = numb1 * numb2;
	printf("%d\n", result);
	return (0);
}
