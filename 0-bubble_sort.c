#include "sort.h"

/**
 * swap - swapping func
 * @curr: curr element
 * @next:next element
 * Return: void func
 */

void swap(int *curr, int *next)
{
	int temp = *curr;
	*curr = *next;
	*next = temp;
}


/**
 * bubble_sort - bubbling func
 * @array: array needed to sort
 * @size: size of array
 * Return: void func
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = true;
			}
		}

		if (!swapped)
			break;
	}
}
