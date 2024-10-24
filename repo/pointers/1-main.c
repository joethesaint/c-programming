#include <stdio.h>

/**
 * main - addresses of variables
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;  /* Declare a character variable */
	int n;  /* Declare an integer variable */

	/* Print the memory address of 'c' using %p format specifier */
	printf("Address of variable 'c': %p\n", (void *)&c);

	/* Print the memory address of 'n' using %p format specifier */
	printf("Address of variable 'n': %p\n", (void *)&n);

	return (0);
}

