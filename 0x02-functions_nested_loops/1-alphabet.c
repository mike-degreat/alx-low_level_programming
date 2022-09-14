#include"main.h"
#include<stdio.h>

/**
 * print_alphabet - Entry point
 *
 * short description print_alphabet: uses _putchar to print lower case letters
 *
 * Return: Always (0)
*/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
		_putchar(alpha);
	_putchar('\n');
}
