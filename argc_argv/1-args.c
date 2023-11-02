#include <stdio.h>
/**
*main - print the number of argument, flw new line
*@argc: counter of argument
*@argv: value of argument
*Return: 0
*/

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
