#include "main.h"

/**
 * is_prime_number - function that returns 1 if input is an integer
 * @n: input
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if input is prime recursive
 * @n: input
 * @m: iterator
 * Return: 1 if prime 0 if not
 */

int actual_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (actual_prime(n, m - 1));
}
