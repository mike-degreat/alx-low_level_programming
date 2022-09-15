#include "main.h"
/**
 * print_numbers - function declared
 * Return: 0 (successful)
*/
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
