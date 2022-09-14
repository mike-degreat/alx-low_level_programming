#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers, statrting with 1 and 2
 *
 * Return: Always 0
*/
int main(void)
{
	long int sum;
	long int fib_num1, fib_num2;
	int count;

	sum = 0;
	fib_num1 = 0;
	fib_num2 = 1;
	count = 0;

	for (count = 0; count < 50; ++count)
	{
		sum = fib_num1 + fib_num2;
		printf("%lu", sum);

		fib_num1 = fib_num2;
		fib_num2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
