#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = '0'; digit1 <= '9'; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= '9'; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= '9'; digit3++)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);

				if (digit1 < '7')

				{
					putchar(',');
					putchar(' ');
				}

			}

		}
	}

	putchar('\n');

	return (0);

}
