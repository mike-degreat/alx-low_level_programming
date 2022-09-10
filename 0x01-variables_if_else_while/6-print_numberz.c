#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;
	num = 0;

	while (num <= 9)
	{
		/*convert num to ASCII representation*/
		putchar(num + '0');
		++num;
	}
	putchar('\n');

	return (0);
}
