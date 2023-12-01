#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: the binay number
 * Return: NULL, 0 or unsigned integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == NULL)
	{
		return ('\0');
	}

	while (*b != '\0')
	{
		number = number << 1;

		if (*b != '1' && *b != '0')
		{
			return (0);
		}

		if (*b == '1')
		{
			number = number | 1;
		}
		b++;
	}
	return (number);
}
