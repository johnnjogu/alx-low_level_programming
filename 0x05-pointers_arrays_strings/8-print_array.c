#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n element of an array of integers
 * followed by new line
 * @a: an input array
 * @n:an input integer
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)

	{
		printf("%d", a[i]);

		if (i < (n - 1))
			printf(", ");

	}

	putchar('\n');

}
