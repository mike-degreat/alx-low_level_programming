#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
*/
void print_number(int n)
{
	unsigned int y;

	if (n < 0)
	{
		_putchar('-');
			n *= -1;
	}

	y = n;

	if (y / 10)
		print_number(y / 10);

	_putchar(y % 10 + '0');
}
