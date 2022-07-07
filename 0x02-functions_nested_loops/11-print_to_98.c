#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from any integer value to 98
 * @n:  input integer
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
	printf("%d", n);
	if (n == 98)
		continue;
}
printf("\n");
}
else
{
	for (; n >= 98; n--)
	{
		printf("%d", n);
		if (n == 98)
			continue;
		printf(", ");
	}
	printf("\n");
}
}
