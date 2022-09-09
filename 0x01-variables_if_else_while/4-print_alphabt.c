#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
			++alpha;
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
