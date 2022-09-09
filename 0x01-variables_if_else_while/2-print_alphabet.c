#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints alphabet in lowercase
 *
 * Return: Always (0)
 */
int main(void)
{
	char alpha = 'a';

	while(alpha <= 'z')
	{
		putchar("%c", alpha);
		alpha++;
	}
	return (0);
}
