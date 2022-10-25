#include "main.h"
#include<stdio.h>
/**
 * print_last_digit - Entry point
 * @i: the number initialized
 *
 * Description: prints the last digit of a number
 *
 * Return : integer
*/
int print_last_digit(int i)
{
	int last = i % 10;

	if (i < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
