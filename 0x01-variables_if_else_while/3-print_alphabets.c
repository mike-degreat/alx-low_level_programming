#include<stdio.h>

/** 
 * main - Entry point 
 *
 * Description: prints the alphabet in lowercase, and then in  uppercase
 *
 * Return: Always (0)
 */
int main(void)
{
	char lower = 'a';
	char UPPER = 'A';
	while (lower <= 'a') 
	{
		putchar(lower);
		lower++;
	}
	while (UPPER <= 'A')
	{
		putchar(UPPER);
		UPPER++;
	}
	putchar('\n');
	return (0);
}
	
