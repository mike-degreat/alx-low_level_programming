#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: double pointer to arguments
 *
 * Return: pointer to new string, or NULL if error
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*find length of vector + '\0' which makes it a 2d array*/
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
