#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here
	 * Recall:
	 * - you are not allowed to use variable a
	 * - you are not allowed to modify the variable p
	 * - only write one statement
	 * - you are not allowed to code anything else than thid line of code
	*/
	*(p + 5)  = 98;
	return (0);
}
