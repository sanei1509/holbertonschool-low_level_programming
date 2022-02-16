#include "main.h"

/**
* reverse_array - function that reverse the elements of an array
* @a: array of elements
* @n: number of elements in the a
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

}
