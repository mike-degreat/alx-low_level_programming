#include "main.h"

/**
 * print_alphabet: uses _putchar function to print alpha in lowercase a-z
 *
 * Return: 0 if successful
*/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
		_putchar(alpha);
	_putchar('\n');
}
