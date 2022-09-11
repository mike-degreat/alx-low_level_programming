#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: 0 if successful
*/

int main(void)
{
	int first_digit = 0, second_digit;

	while (first_digit <= 99)
	{
		second_digit = first_digit;
		while (second_digit <= 99)
		{
			if (second_digit != first_digit)
			{
				putchar((first_digit / 10) + 48);
				putchar((first_digit % 10) + 48);
				putchar(' ');
				putchar((second_digit / 10) + 48);
				putchar((second_digit % 10) + 48);

				if (first_digit != 98 || second_digit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++second_digit;
		}
		++first_digit;
	}
	putchar('\n');

	return (0);
}
