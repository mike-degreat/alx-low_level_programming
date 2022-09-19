#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: char with copy of string
*/

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
