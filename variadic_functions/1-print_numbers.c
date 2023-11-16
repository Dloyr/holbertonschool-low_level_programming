#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers - print list of number
*@separator: argument between number
*@n: size of print_numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listnumbers;
	unsigned int index;
	int numbers;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(listnumbers, n);

	for (index = 0; index < n; index++)
	{
		numbers = va_arg(listnumbers, int);
		printf("%d", numbers);
		if (index < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(listnumbers);
}
