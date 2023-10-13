#include <stdio.h>

/**
 * main - Print the size of a various types on the computer
 *
 * Return: Always 0.
 */
int main(void)
{
	printf(sizeof(char));
	printf(sizeof(int));
	printf(sizeof(long int));
	printf(sizeof(long long int));
	printf(sizeof(float));

	return (0);
}
