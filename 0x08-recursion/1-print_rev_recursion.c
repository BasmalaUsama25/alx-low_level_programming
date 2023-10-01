#include "main.h"

/**
 * _print_rev_recursion - prints a function in reverse
 *
 * @s: pointer
 *
 * Return: Always 1 (success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
        	return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}
