#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @i: integer value passed as arg
 *
 * Returns: integer
*/

int print_last_digit(int i)
{
	int l_st = i % 10;

	if (l_st < 0)
	{
		l_st *= -1;
	}
	_putchar(l_st + '0');
	return (l_st);
}
