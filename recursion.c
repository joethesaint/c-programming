#include <stdio.h>

/* Function to calculate the factorial of a number */
unsigned int factorial(unsigned int n)
{
    /* Base case: if n is 0 or 1, return 1 */
    if (n <= 1)
        return 1;
    
    /* Recursive case: multiply n with factorial of (n-1) */
    return n * factorial(n - 1);
}

int main()
{
    unsigned int num;
    
    /* Prompt the user to enter a number */
    printf("Enter a number: ");
    
    /* Read the number from user input */
    scanf("%u", &num);
    
    /* Calculate and print the factorial of the entered number */
    printf("Factorial of %u is %u\n", num, factorial(num));
    
    return 0;
}
