#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
*/

void rev_string(char *s)
{
	int i, j;
	char ch;

	/*find string length without null char*/
	for (i = 0; s[i] != '\0'; ++i)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < 1 / 2; ++j)
	{
		ch = s[i];
		s[i] = s[i - 1 - j]; /*-1 because the array starts from 0*/
		s[i - 1 - j] = ch;
	}
}
