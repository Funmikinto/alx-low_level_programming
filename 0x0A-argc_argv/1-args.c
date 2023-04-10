#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the number of arguments
 * @argc: number of arguments
 * @argv: number of array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
