#include "sort.h"
/**
 * quick_sort - sorts an array usung quick sort algorithm
 *
 * @array: array to sorted
 * @size: array size
 * Return: nothign(Void)
 */

void quick_sort(int *array, size_t size)
{
	Qsort(array, 0, size - 1, size);
}

/**
 * Qsort - quick_sort function
 *
 * @a: the input array
 * @first: fisrt element index
 * @last: last element index
 * @size: array size
 * Return: nothing (void)
 */

void Qsort(int *a, int first, int last, int size)
{
	int x, y, i;
	int tmp;

	if (first < last)
	{
		x = last;
		y = first;
		for (i = first; i < last; i++)
		{
			if (a[i] < a[x])
			{
				if (i != y)
				{
					tmp = a[i];
					a[i] = a[y];
					a[y] = tmp;
					print_array(a, size);
				}
				y++;
			}
		}
		if (y != x && a[y] != a[x])
		{
			tmp = a[y];
			a[y] = a[x];
			a[x] = tmp;
			print_array(a, size);
		}
		Qsort(a, first, y - 1, size);
		Qsort(a, y + 1, last, size);
	}
}
