#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int (*operator)(int, int) = get_op_func(argv[2]);
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(num1, num2));
	return (0);
}
