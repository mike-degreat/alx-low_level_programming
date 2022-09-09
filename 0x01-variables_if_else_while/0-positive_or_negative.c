#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main: determine if number is positive or negative
 *
 * Description: assigned a random number to variable n.
 * check if the number stored in the variable n is eithe positive or negative.
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*mycode*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		(n < 0)
	{
		printf("%d is a negative\n", n);
	}

	return (0);
}
