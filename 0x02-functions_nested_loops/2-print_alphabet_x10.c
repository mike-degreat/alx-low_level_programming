#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet Ten times
 * Return: Nothing
*/
void print_alphabet_x10(void)
{
	int times, alpha;

	for (times = '0'; times <= 9; ++times)
	{
		for (alpha = 'a'; alpha <= 'z'; ++alpha)
			_putchar(alpha);
		_putchar('\n');
	}
}
