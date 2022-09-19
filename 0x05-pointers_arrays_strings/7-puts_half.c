#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: 0
*/

void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	j = max / 2;
	while (j <= max)
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
