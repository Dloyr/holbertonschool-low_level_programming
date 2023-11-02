#include <stdio.h>

/**
*main - prints all argument
*@argc: counter of argument
*@argv: value of argument
*Return: 0
*/

int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc ; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
