#include "main.h"

/**
 * _strspn - funtiin to get length of prefix substring
 * @accept: string to check against
 * @s: string too check for
 *
 * Return: number of bytes of s in accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
