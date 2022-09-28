#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks to see if a string is a palindrome
 * @1: left hand index
 * @r: right hand index
 * @p: possible palindrome
 *
 * Return: 1 if palindrome, 0 if not
*/
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[1] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	return (check_palindrome(0, i, s));
}
