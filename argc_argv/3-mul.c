#include <stdio.h>
#include <stdlib.h>

/**
*main - multiplie two numbers
*@argc: argument counter
*@argv: argument value
*Return: 1 or mul
*/

int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			int v1 = atoi(argv[1]);
			int v2 = atoi(argv[2]);
			int mul = v1 * v2;

			return (mul);
		}
	}
}
