#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: 0
*/

void puts_half(char *str)
{
	int j, i = 0;

	while (*(str + i))
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < i)
	{
		putchar(*(str + j));
		j++;
	}
	putchar('\n');
}
