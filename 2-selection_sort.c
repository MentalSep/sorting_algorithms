#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using the
 * Selection sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, smallest;

	for (i = 0; i < size; i++)
	{
		smallest = i;
		for (j = i; j < size; j++)
			if (array[j] < array[smallest])
				smallest = j;
		if (smallest != i)
		{
			tmp = array[i];
			array[i] = array[smallest];
			array[smallest] = tmp;
			print_array(array, size);
		}
	}
}
