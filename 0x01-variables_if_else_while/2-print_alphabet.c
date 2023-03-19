/**
 * main - main function
 *
 * Return: always 0
 */

#include <stdio.h>
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
