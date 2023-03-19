/**
 * main - main function
 *
 * Return: alwasy 0
 */

#include <stdio.h>
int main(void)
{
	char i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
