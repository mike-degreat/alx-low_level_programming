#include "main.h"

/**
 * print_alphabet: uses _putchar function to print alpha in lowercase a-z
 *
 * Return: 0 if successful
*/

void print_alphabet(void)
{
	char alpha = char "a";

	while (alpha <= "z")
	{
		_putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
