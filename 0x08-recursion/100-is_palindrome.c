#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
*/
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s == '\0')
		return (0);
	x = _strlen_recursion(s + 1);
	return (x + 1);
}

/**
 * check_palindrome - check if a string is palindrome
 * @s: string to check
 * @x: iterator
 * Return: 1 if palindrome, 0 otherwise
*/
int check_palindrome(char *s, int x)
{
	int len = _strlen_recursion(s) - 1;

	if (s[x] != s[len - x])
		return (0);
	if (x >= len)
		return (1);
	return (check_palindrome(s, x + 1));
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0));
}
