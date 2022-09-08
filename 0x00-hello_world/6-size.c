# ! / bin / bash
#include<stdio.h>
/**
 * main- prints the size of various types
 * Description:prints the size of various types on the computer it is compiled
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i:
	long int l_i;
	long long int l_li;
	float f;

	printf("Size of a char: %ld byte(s)\n", (int) sizeof(c));
	printf("Size of an int: %ld byte(s)\n", (int) sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (int) sizeof(l_i));
	printf("Size of a long long int: %ld byte(s)\n", (int) sizeof(l_li));
	printf("Size of a float: %ld byte(s)\n", (int) sizeof(f));
	return (0);
}
