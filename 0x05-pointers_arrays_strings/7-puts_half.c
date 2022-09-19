#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: 0
*/

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
		;
	if (i % 2 == 0)
	{
		for (j = 1 / 2; str[j] != '\0'; ++j)
			putchar(str[j]);
	}
	else
	{
		for (j = ((i - 1) / 2) + 1; str[j] != '\0'; ++j)
			putchar(str[j]);
	}
	putchar('\n');
}
