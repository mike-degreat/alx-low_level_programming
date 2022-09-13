#include "main.h"
#include<stdio.h>

/**
 * _abs - function that declares the absolute integer value
 *
 * @y: takes in integer type for input function
 *
 * Return: Always 0 (success)
*/

int _abs(int y)
{
	if (y < 0)
		y *= -1;
	return (y);
}
