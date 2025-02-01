// Write a C program to find the product of a variable number of integers passed as arguments to a function using variadic functions.

#include <stdio.h>
#include <stdarg.h>

int	product(int count, ...)
{
	va_list	list;
	va_start(list, count);
	int	product = 1;

	for (int i = 0; i < count; i++)
	{
		int	x = va_arg(list, int);
		product *= x;
	}
	va_end(list);
	return (product);
}

int	main(void)
{
	printf("Product: %d", product(3, 2, 4, 4));
	return (0);
}