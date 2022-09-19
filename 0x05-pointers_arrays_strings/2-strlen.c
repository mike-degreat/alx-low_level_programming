#include "main.h"

/**
 * _strlen - return length of string
 * @s: string input
 * Return: length of string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
