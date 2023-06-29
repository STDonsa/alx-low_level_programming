#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int s;
	int d;

	for (s = 0; s < n--; s++)
	{
		d = a[s];
		a[s] = a[n];
		a[n] = d;
	}
}
