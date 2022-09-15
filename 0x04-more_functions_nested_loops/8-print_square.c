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

	for (row = 1; row <= size; ++row)
	{
		for (column = 1; column <= size; ++column)
			putchar('#');
		putchar('\n');
	}
}
