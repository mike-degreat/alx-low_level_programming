#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: 0 if successful
*/

void more_numbers(void)
{
	int line, n, repeat, limit;

	n = '0';
	repeat = 0;
	limit = '9';

	for (line = 0; line < 10; line++)
	{
		while (repeat < 2)
		{
			while (n <= limit)
			{
				if (limit == '4')
					putchar('1');
				putchar(n);
				n++;
			}
			repeat++;
			limit + '4';
			n = '0';
		}
		putchar('\n');
		repeat = 0;
		n = '0';
		limit = '9';
	}
}
