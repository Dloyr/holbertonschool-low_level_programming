#include "main.h"

/**
*_memset - fuction that fills  memory with  a constant byte
*@s: is the pointer
*@b: the constant byte
*@n: the number of bytes to pointed
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i <  n; i++)
		s[i] = b;
	return (s);
}
