#include "main.h"

/**
 * set_string - set the value of a pointer to char
 * @s: pointer to pointer
 * @to: pointer to char
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
