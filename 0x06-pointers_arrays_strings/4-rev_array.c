#include "main.h"

/**
 * reverse_array - a function that reseres an array
 * @a: the array as a pointer
 * @n: the size of the array
 * Return: always void
 **/

void reverse_array(int *a, int n)
{
	int middle = n / 2;
	int last = n - 1;
	int i;
	int temp;

	for (1 = 0; i < middle; i++)
	{
		temp = a[i];
		a[i] = a[last - i];
		a[last - i] = temp;
	}
}
