#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * bubble_sort - sort list with bubble
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = 0, t = size;
	int holder;

	while (t > 0)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				holder = array[n];
				array[n] = array[n + 1];
				array[n + 1] = holder;
				print_array(array, size);
			}
		}
		t--;
	}
}
