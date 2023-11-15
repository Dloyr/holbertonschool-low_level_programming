#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function pointer to print a name
 * @name: name to print
 * @f: pointer to function to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
