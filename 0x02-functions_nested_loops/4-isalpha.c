#include "main.h"
/**
 * _isalpha - function declared
 * @c: the int value it receives
 * Return: 1 if true 0 if false
*/
int _isalpha(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' || C <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
