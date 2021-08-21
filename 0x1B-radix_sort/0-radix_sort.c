#include <stdlib.h>
#include "sort.h"


/**
 * radix_sort - the Radix sort algorithm
 * @array: array
 * @size: array
 */
void radix_sort(int *array, size_t size)
{
	int temp, min, holder, i, j, count;
	int div = 10;
	size_t a;

	count = size;
	if (!array || size == 0)
		return;
	for (a = 0; a < size - 1; a++)
	{
		if (array[a] > array[a + 1])
		{
			for (i = 0; i < count; i++)
			{
				holder = i;
				min = array[i] % div;
				for (j = i + 1; j < count; j++)
				{
					if (min > (array[j] % div))
					{
						min = array[j] % div;
						holder = j;
					}
				}
				temp = array[holder];
				array[holder] = array[i];
				array[i] = temp;
			}
			print_array(array, size);
			div *= 10;
		}
	}
}
