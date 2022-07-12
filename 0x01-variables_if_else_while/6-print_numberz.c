#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
	}

	putchar('\n');
	return (0);

}
