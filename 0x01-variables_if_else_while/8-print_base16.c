#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;
	int numb;

	for (numb = '0'; numb <= '9'; letter++)
	{
		putchar(numb);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);

	}
	putchar('\n');
	return (0);
}
