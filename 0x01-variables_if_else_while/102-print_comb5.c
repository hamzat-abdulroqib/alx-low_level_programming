#include <stdio.h>

/**
 * main - print all possible diffrent combinatuonof the three digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundeds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds) ||
							(tens > ones) || (hundreds > tens))) /*eliminates repitition*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' &&
								tens == '8')) /*adds comes and spaces*/
					{
						putchar(',');
						puchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
