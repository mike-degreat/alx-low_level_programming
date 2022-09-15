#include "main.h"

/**
 * print_square - draws a square
 * @size: length and width of a square
 *
 * Return: 0
*/

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
