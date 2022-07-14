#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: aan input array
 * @n: number of elements of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	int holder;

	while (i < n--)
	{
		holder = a[i];
		a[i++] = a[n];
		a[n] = holder;

	}

}
