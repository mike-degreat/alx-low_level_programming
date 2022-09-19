#include "main.h"

/**
 * puts2 - print alternating chars of string
 * @str: string input
 * Return: 0
*/

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
