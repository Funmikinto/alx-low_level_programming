#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number
 * @m: iterator
 * Return: 0
 */

int _sqrt(int n, int m)
{
	int square = m * m;

	if (square > n)
		return (-1);
	if (square == n)
		return (m);
	return (_sqrt(n, m + 1));
}
