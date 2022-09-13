#include "main.h"
/**
 * print_last_digit - Function declared
 * @i: the number initialized
 *
 * Description: prints the last digit of a number
 *
 *Returns : integer
*/
int print_last_digit(int i)
{
	int last = i % 10;

	if (i < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
