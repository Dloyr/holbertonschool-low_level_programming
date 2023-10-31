#include "main.h"

/**
*_pow_recursion - return value of x power by y
*@x: number
*@y: power
*Return: 1, -1, function
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x *  _pow_recursion(x, y - 1));
	}
}
