#include "sort.h"

/**
 * sift_pos - sift positions in the heap
 * @array: array
 * @size: size_t
 * @start: size_t
 * @end: size_t
 */
void sift_pos(int *array, size_t size, size_t start, size_t end)
{
	size_t parent, child, swap;
	int temp;

	parent = start;
	while (parent * 2 + 1 <= end)
	{
		child = 2 * parent + 1;
		swap = parent;
		if (array[swap] < array[child])
			swap = child;
		if (child + 1 <= end && array[swap] < array[child + 1])
			swap = child + 1;
		if (swap != parent)
		{
			temp = array[parent];
			array[parent] = array[swap];
			array[swap] = temp;
			print_array(array, size);
			parent = swap;
		}
		else
			break;
	}
}

/**
 * heap_sort - heap sort in ascending order
 * @array: array
 * @size: size_t
 */
void heap_sort(int *array, size_t size)
{
	size_t end;
	int temp;
	long start = (size - 2) / 2;

	if (size < 2)
		return;
	while (start >= 0)
		sift_pos(array, size, start--, size - 1);
	end = size - 1;
	while (end > 0)
	{
		temp = array[end];
		array[end] = array[0];
		array[0] = temp;
		print_array(array, size);
		sift_pos(array, size, 0, --end);
	}
}
