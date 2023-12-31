#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - print a list of strings
*@separator: argument between strings
*@n: size of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list liststrings;
	unsigned int index;
	char *strings;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(liststrings, n);

	for (index = 0; index < n; index++)
	{
		strings = va_arg(liststrings, char*);

		if (strings != NULL)
		{
		printf("%s", strings);
		}

		if (strings == NULL)
		{
			printf("(nil)");
		}

		if (index < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(liststrings);
}
