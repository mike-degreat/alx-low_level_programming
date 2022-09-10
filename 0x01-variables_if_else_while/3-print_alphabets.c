#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase to uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lower = 'a';
	char UPPER = 'A';

	/*prints lowercase alpha a-z*/
	while (lower <= 'z')
	{
		putchar(lower);
		++lower;
	}
	/*prints uppercase alpha A-Z*/
	while (UPPER <= 'Z')
	{
		putchar(UPPER);
		++UPPER;
	}
	putchar('\n');

	return (0);
}
