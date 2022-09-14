#include<stdio.h>
/**
 * main - prints the sum of all even fibonacci numbers below 4,000,000
 *
 * Return: Always 0.
*/
int main(void)
{
	unsigned long  total_sum, fib_num1, fib_num2;
	float sum;

	total_sum = 0;
	sum = 0;
	fib_num1 = 0;
	fib_num2 = 1;

	while (sum < 4000000)
	{
		sum = fib_num1 + fib_num2;
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
		fib_num1 = fib_num2;
		fib_num2 = sum;
	}
	printf("%li\n", total_sum);

	return (0);
}
