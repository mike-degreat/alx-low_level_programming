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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * * the pointer to the '\0' of the
	 * string s
	*/
	if (*s == c)
		return (s);
	/* return null if not found */
	return ('\0');
}
