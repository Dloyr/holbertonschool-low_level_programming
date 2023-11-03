#include <stdio.h>
#include <stdlib.h>

/**
*main - multiplie two numbers
*@argc: argument counter
*@argv: argument value
*Return: 0
*/

int main(int argc, char **argv)
{
	int v1, v2, mul;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		v1 = atoi(argv[1]);
		v2 = atoi(argv[2]);
		mul = v1 * v2;
		printf("%d\n", mul);
	}
	return (0);
}
