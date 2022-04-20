#include "sort.h"

/**
 * bubble_sort - sorts an array of integers (bubble sort) asce
 * @array: array
 *
 * @size: size of []
 *
 * Return: no return
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y, tmp;


	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
