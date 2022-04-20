#include "sort.h"


/**
 * selection_sort - sort substrings of decreasing size based on lowest element
 * @array: elements to be sorted
 * @size: length of the array
 */

void selection_sort(int *array, size_t size)
{
  size_t x, lment, lowIx, subAry;
	int tmp;

	if (array && size > 2)
	{
		tmp = array[0];
		lowIx = 0;
		for (lment = 0; lment < (size - 2); lment++)
		{
			subAry = size - lment;
			tmp = array[lment];
			lowIx = lment;
			for (x = size - subAry; x < size; x++)
			{
				if (array[x] < tmp)
				{
					tmp = array[x];
					lowIx = x;
				}
				if (x == size - 1)
				{
					array[lowIx] = array[lment];
					array[lment] = tmp;
				}
			}
			if (lowIx != lment)
				print_array(array, size);
		}
	}
	else if (array && size == 2)
	{
		if (array[1] < array[0])
		{
			tmp = array[0];
			array[0] = array[1];
			array[1] = tmp;
			print_array(array, size);
		}
	}
}
