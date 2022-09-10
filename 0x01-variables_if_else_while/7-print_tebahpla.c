#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char r_alpha = 'z';

	while (r_alpha >= 'a')
	{
		putchar(r_alpha);
		--r_alpha;
	}
	putchar('\n');

	return (0);
}
