#include "sort.h"

/**
 * bubble_sort - sort array using bubble sort algorithm
 *
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing(void)
 */

void bubble_sort(int *array, size_t size)
{
	size_t n;
	size_t i;
	int swp;
	int tmp;

	for (n = size, swp = 1; n > 0 && swp; n--)
	{
		swp = 0;
		for (i = 0; (i + 1) < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swp = 1;
			}
		}
	}
}
