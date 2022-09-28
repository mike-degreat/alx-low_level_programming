#include "main.h"

/**
 * sqrt_checker - checks for the square root of c
 * @g: guess of squrt
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
*/
int sqrt_checker(int g, int c)
{
	if (g * g > v)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_checker(g + 1, c));
}
/** _sqrt_recursion - returns the natural sqrt of a number
 * @n: integer to the squrt
 *
 * Return: natural square root or -1
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_checker(1, n));
}
