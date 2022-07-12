#include "main.h"

/**
 * print_array -> prints n times the element of an array
 * @a: the pointer to the elements
 * @n: times to print the elements
 */

void print_array(int *a, int n)
{
	if (a)
	{
	while (n > 0)
	{
		printf("%d", *a++);
		if (--n)
		printf(", ");
	}
	putchar('\n');
	}
}
