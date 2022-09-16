#include"main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer to be printed
*/

void print_number(int n)
{
	unsigned int num = n;

	/*check if negative*/
	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print last digit*/
	putchar((num % 10) + 48);
}
