#include "main.h"

/**
* factorial -  return the factorial of n
*@n: number to factorized
*Return: -1, 1 or factorial number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
