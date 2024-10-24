#include <stdio.h>

/* print Celsius-Fahrenheit table reversed order
 * 	for cel = idk, idk, idk, ....; floating-point version */
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -20;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	celsius = upper;
	printf("Celsius to Fahrenheit\n");
	while (celsius >= lower) {  /* ensures that loop continues until c reaches the lower*/
								/*# limit (0 in this case) */
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%6.1f \t %3.0f\n", celsius, fahr);
		celsius = celsius - step;
	}
}
