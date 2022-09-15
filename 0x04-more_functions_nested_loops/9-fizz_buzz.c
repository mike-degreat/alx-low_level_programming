#include <stdio.h>

/**
 * main - fizz buzz task
 *
 * Return: void
*/

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 5 == 0 && n % 3 == 0)
			putchar("FizzBuzz ");
		else if (n % 5 == 0)
			if (n == 100)
				putchar("Buzz");
			else
				putchar("Buzz ");
		else if (n % 3 == 0)
			putchar("Fizz");
		else
			putchar("%d", n);
	}
	putchar("\n");

	return (0);
}
