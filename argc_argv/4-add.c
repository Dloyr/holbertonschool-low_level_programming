#include <stdio.h>
#include <stdlib.h>

/**
*main - addition numbers
*@argc: argument counter
*@argv: argument value
*Return: 0
*/

int main(int argc, char **argv)
{
	int v1, v2, add;

	if (argc < 0)
	{
		printf("Error\n");
	}
	else
	{
		v1 = atoi(argv[1]);
		v2 = atoi(argv[2]);
		add = v1 + v2;
		printf("%d\n", add);
	}
	return (0);
}
