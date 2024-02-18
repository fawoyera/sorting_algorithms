#include "sort.h"
/**
 * bubble_sort - sort an array of integers in ascending order
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, swap_index, size_n = size;

	while (array && array[0] && array[1])
	{
		swap_index = 0;
		for (i = 0; i < size_n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swap_index = i + 1;
			}
		}
		size_n = swap_index;
		if (swap_index <= 1)
			break;
	}
}
