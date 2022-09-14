#include "main.h"
#include<stdio.h>

/**
 * print_times_table - prints the times table
 * @i: integer
 *
 * Description: prints the times table
 *
 * Return: void
*/
void print_times_table(int i)
{
	int prod, mult, digit;

	if (i <= 15 && i >= 0)
	{
		for (digit = 0; digit <= i; ++digit)
		{
			_putchar(48);
			for (mult = 1; mult <= i; ++mult)
			{
				_putchar(',');
				_putchar(' ');

				prod = digit * mult;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
