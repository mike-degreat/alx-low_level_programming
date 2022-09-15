#include "main.h"
/**
 * print_numbers - function declared
 * Return: 0 (successful)
*/
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
