#include "main.h"

/**
*sqrt_recursion_2 - return the natural square root of a number
*@n: number to square
*@i: result of number to square
*Return: value of i, -1, or recall function
*/

int sqrt_recursion_2(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursion_2(n, i + 1));
	}
}

/**
*_sqrt_recursion - return the fonction sqrt_recursion_2
*@n: value of number square
*Return: the function sqrt_recursion_2
*/

int _sqrt_recursion(int n)
{
	return (sqrt_recursion_2(n, 0));
}
