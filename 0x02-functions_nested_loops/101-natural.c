#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints sumof all multiples of 3 & 5 below 1024(excluded
 *
 * Return: 0 if sucessfull
*/
int main(void)
{
	int num, sum;

	sum = 0;
	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
