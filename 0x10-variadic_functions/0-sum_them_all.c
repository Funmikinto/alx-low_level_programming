#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of its parameters
 * @n: the number of parameters
 * @...: parameters
 * Return: if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int m, sum = 0;

	va_start(ap, n);

	for (m = 0 ; m < n ; m++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
