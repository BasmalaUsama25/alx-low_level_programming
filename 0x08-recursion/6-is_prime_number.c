#include "main.h"

/**
 * check_if_prime - check if number is prime ot no
 *
 * @n: number to check if prime
 * @b: iterator
 *
 * Return: 1 if prime, 0 otherwise
 */

int check_if_prime(int n, int b)
{
	if (n % b == 0)
		return (0);
	if (b > b / 2)
		return (1);
	return (check_if_prime(n, b + 1));
}

/**
 * is_prime_number - check if a number is prime
 *
 * @n: number to check if prime
 *
 * Return: 1 if prime, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_if_prime(n, 2));
}
