#include "main.h"

/**
 * _memcpy - function that copies bytes from memory area
 * @dest: destination of copied bytes
 * @src: memory area of bytes being copied
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
