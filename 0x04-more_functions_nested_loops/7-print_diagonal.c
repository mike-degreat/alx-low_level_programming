#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number times
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int line = 0;
	int spaces;

	if (n > 0)
	{
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
			line++;
		}
	}
	else
	{
		putchar('\n');
	}
}
