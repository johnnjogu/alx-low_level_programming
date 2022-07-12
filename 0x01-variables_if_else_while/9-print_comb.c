#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
		if (numb != '9')
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
