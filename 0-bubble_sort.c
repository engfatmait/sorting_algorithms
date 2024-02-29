#include "sort.h"
/**
 * bubble_sort - function to implement bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: no return
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, k;
	int temp;

	if (!array || !size || size < 2)
		return;
	k = 0;
	while (k < size)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
			print_array(array, size);
		}
		k++;
	}
}
