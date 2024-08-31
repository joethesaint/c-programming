#include <stdio.h>

/* 0 - 4B numbers is the max value of unsigned numbers  */
unsigned int factorial(unsigned int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
} /* This fn works perfectly for calculating the factorial of both 0 and 1 */

int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Factorial of %u is %u\n", num, factorial(num));
    return 0;
}
