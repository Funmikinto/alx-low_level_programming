#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all argument it receives
 * @argc: the argument parameter
 * @argv: the array of argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0 ; m < argc ; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
