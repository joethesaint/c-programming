#include <stdio.h>

/**
 * modify_my_char_var - solve me
 *
 * Return: nothing.
 */
void modify_my_char_var(char *cc, char ccc)
{
	printf("Value of 'cc': %p\n", cc);
	printf("Value of 'ccc': %c\n", ccc);
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - solve  me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Value of 'c' before the call: %d('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'p' : %p\n", p);
	modify_my_char_var(p, c);
	printf("Value of 'c' after the call: %d('%c')\n", c, c);
	printf("Value of 'p': %d ('%c')\n", *p, *p);
	return (0);
}
