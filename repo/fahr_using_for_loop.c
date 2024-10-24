#include <stdio.h>

/**
 * This program prints a table of Celsius to Fahrenheit conversions
 * using a for loop. It starts at 300 Celsius and goes down to -20 Celsius.
 * The formula to convert Celsius to Fahrenheit is:
 * fahrenheit = (celsius * 9.0 / 5.0) + 32
 */

int main()
{
	/* We will print a table of Celsius to Fahrenheit conversions.
	 * We will start at 300 Celsius and go down to -20 Celsius.
	 * We will print the Celsius value, followed by a tab, and
	 * then the Fahrenheit value.
	 */
	float celsius; /* Our Celsius variable */

	for (celsius = 300; celsius >= -20; celsius = celsius - 20) /* Loop from 300 to -20 */
	{
		/* Print the Celsius value followed by a tab */
		printf("%6.1f \t ", celsius);

		/* Print the Fahrenheit value */
		printf("%3.0f\n", (celsius * 9.0 / 5.0) + 32);
	}
}
