#include <stdlib.h>
#include "sort.h"


/**
 * count_sort - count_sort
 * @array: array
 * @n: int
 * @exp: int
 */
void count_sort(int *array, int n, int exp)
{
	int i;
	int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int *output = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		count[(array[i] / exp) % 10]++;
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	for (i = n - 1; i >= 0; i--)
	{
		output[count[(array[i] / exp) % 10] - 1] = array[i];
		count[(array[i] / exp) % 10]--;
	}
	for (i = 0; i < n; i++)
		array[i] = output[i];
	free(output);
}


/**
 * radix_sort - the Radix sort algorithm
 * @array: array
 * @size: array
 */
void radix_sort(int *array, size_t size)
{
	int max, exp;
	size_t i;

	if (!array || size < 2)
		return;
	max = array[0];
	for (i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];
	for (exp = 1; max / exp > 0; exp *= 10)
	{
		count_sort(array, size, exp);
		print_array(array, size);
	}
}
