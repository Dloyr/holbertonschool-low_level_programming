#include <stdio.h>

/**
 * main - Print the size of a various types on the computer
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char:",sizeof(char)"byte(s)");
	printf("Size of a char:",sizeof(int)"byte(s)");
	printf("Size of a char:",sizeof(long int)"byte(s)");
	printf("Size of a char:",sizeof(long long int)"byte(s)");
	printf("Size of a char:",sizeof(float)"byte(s)");

	return (0);
}
