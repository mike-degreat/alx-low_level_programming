#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: 0 if successful
*/

void more_numbers(void)
{
	int num, line, count;

	for (line = 1; line <= 10; ++line)
	{
		for (count = 0; count <= 14; ++count)
		{
			num = count;
			if (count > 9)
			{
				putchar(1 + 48);
				num = (count % 10);
			}
			putchar(num + 48);
		}
		putchar('\n');
	}
}












}
