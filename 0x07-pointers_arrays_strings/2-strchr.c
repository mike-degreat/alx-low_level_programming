#include "main.h"

/**
 * _strchr - located a character in a string
 * @c: character to check for
 * @s: string to check for the character c
 *
 * Return: pointer to first occurrence of c
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i))
		return (s + i);
	return (0);
}
