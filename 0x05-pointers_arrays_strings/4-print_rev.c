#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: 0
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
