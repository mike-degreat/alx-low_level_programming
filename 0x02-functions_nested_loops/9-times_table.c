#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
*/

void times_table(void)
{
	int digit, mult, prod;

	for (digit = 0; digit <= 9; ++digit)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = digit * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
