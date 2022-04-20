include "sort.h"

/**
 * quick_sort - sorts an array of integers(ascending) using quick sort
 *
 * @array: pointer
 *
 * @size: size[]
 */

void quick_sort(int *array, size_t size)
{
	/* null check */
	if (array)
	{
		/* sort from lowest to highest, recursively */
		sort(array, 0, size - 1, size);
	}
}




