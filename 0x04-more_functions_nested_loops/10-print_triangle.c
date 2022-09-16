#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: length of sides
 *
 * Return: void
*/

void print_triangle(int size)
{
	int line = 0;
	int hash_tag;
	int spaces;

	if (size > 0)
	{
		while (line < size)
		{
			for (spaces = size - 1; spaces > line; spaces--)
			{
				putchar(' ');
			}
			for (hash_tag = 0; hash_tag < line + 1; hash_tag++)
			{
				putchar('#');
			}
			putchar('\n');
			line++;
		}
	}
	else
	{
		putchar('\n');
	}
}
