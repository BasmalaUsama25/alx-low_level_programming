#include "main.h"

/**
 * find_square_root - finds the square root of a number
 * @n: number to find the square root of
 * @m: iterator
 *
 * Return: the square root of n
 * Returns: -1 if n does not have a natural square root
 */

int find_square_root(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (find_square_root(n, m + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the square root of n
 * Returns: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_square_root(n, 0));
}

