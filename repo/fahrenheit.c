#include <stdio.h>

/* print Celsius-Fahrenheit table
 * 	for cel = idk, idk, idk, ....; floating-point version */
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -20;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	celsius =lower;
	printf("Celsius to Fahrenheit\n");
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%6.1f \t %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
