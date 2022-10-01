#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: arguments vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
*/
int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[1], &flag, 10);
		if (*flag)
		{
			puts("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}

