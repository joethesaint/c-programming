#include <stdio.h>

int i;
int j;

int main(void)
{
	i = 0;
	j = 2;
	while ((i < 10) && (j < 14))
	{
		if (i == 1)
		{
			j -= 7;
		}
		else if (j == 1)
		{
			i += j;
		}
		else if (i == 6)
		{
			while (j > 0)
			{
				j--;
				i++;
			}
		}

		/* i = ? / j = ? */
		i++;
		j += 2;

		printf("i = %d,  j = %d\n", i, j);
	}

	return 0;
}
