#include "main.h"

/**
 * _isupper - isupper checks for uppercase character
 * @c: input variable arg to check for uppercase
 *
 * Return: 1 if uppercase, 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
