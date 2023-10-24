#include "sort.h"

void helper(int *array, size_t first, size_t last, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order using the
 * Quick sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	size_t first = 0, last = size - 1;

	helper(array, first, last, size);
}

/**
 * helper - helper function for quick_sort
 *
 * Description: Sorts the array recursively using the Quick sort algorithm
 * and an impelmentation of the Lomuto partition scheme
 *
 * @array: The array to be sorted
 * @first: First element of the array
 * @last: Last element of the array
 * @size: Number of elements in @array
 */
void helper(int *array, size_t first, size_t last, size_t size)
{
	size_t i, j, pivot, tmp;

	pivot = last;
	i = first;

	for (j = first; j < last; j++)
	{
		if (array[pivot] >= array[j])
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != pivot)
	{
		tmp = array[i];
		array[i] = array[pivot];
		array[pivot] = tmp;
		print_array(array, size);
	}
	if (i > first)
		helper(array, first, i - 1, size);
	if (i < last)
		helper(array, i + 1, last, size);
}
