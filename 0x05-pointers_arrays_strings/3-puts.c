#include "main.h"

/**
 * _puts - prints string
 * @str: string
 * Return: 0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
